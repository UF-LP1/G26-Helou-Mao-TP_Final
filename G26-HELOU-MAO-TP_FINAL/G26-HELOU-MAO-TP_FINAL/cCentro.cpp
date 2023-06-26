#include "cCentro.h"
#include "Header.h"
cCentro::cCentro(string miNombre, string miDireccion, list <cMedico*> misMedicos)
{
	this->aNombre = miNombre;
	this->aDireccion = miDireccion;
	list <cMedico*>  ::iterator it = misMedicos.begin();
	for (it; it != misMedicos.end(); it++)
	{
		aMedicos.push_back(*it);
	}

}
cCentro::cCentro(string miNombre, string miDireccion,  cListaFichas fichas)
{
	this->aNombre = miNombre;
	this->aDireccion = miDireccion;

	for (int i = 0; i < fichas.size(); i++)
	{
		aFichas + fichas[i];
	}


}
cCentro::cCentro(string miNombre, string miDireccion)
{
	this->aNombre = miNombre;
	this->aDireccion = miDireccion;
}
cCentro::~cCentro()
{

}
cListaFichas cCentro::pacientesaContactar()
{
	cListaFichas lista;
	float segundosPorSemana = 604800;
	for (int i = 0; i < aFichas.size(); i++)
	{
		time_t ahora;//creo varable
		time(&ahora);//la inicializo con el tiempo de ahora

		float segundos = difftime(aFichas[i]->aAsistencia->GET_TURNO(), ahora);
		if (aFichas[i]->aAsistencia->GET_ASISTENCIA() == false && segundos > 604800.0)
		{
			lista + (aFichas[i]);
		}
	}
	return lista;
}

void cCentro::atenderPaciente(cPaciente* paciente)
{

	cFicha* ficha=new cFicha;//creo variable para guardar
	ficha = buscarFicha(paciente);//busco paciente en mi lista de fichas
	if (ficha == nullptr)//el paciente aun no tiene ficha
	{ 
		ficha = crearFicha(paciente);//creo una ficha para el paciente
		pasarFichaOncologo(ficha);
		pasarFichaDosimetrista(ficha);
		pasarFichaOncologo(ficha);
	}
	else if (ficha->aDosisMax == ficha->aRadiacionAcum)//el paciente termino el tratamiento
	{
		ficha->aAlcanzoMax=true;
		ficha->aMotivo=(finTratamiento);
		pasarFichaOncologo(ficha);
	}
	else if (ficha->aListaEspera == true)	//podriamos chequear si esta dado de alta que se haga una reevaluacion
	{
		//habria que chequear que termino su tiempo de espera
		ficha->aMotivo=(diagnostico);	//de rediagnostica y te evalua
		ficha->aRadiacionAcum=(0);
		pasarFichaOncologo(ficha);
		pasarFichaDosimetrista(ficha);
		pasarFichaOncologo(ficha);
	}
	else //chequeo si a algun tumor le faltan sesiones
	{
		
		int contSesiones = 0;
		cTumor* tumor = nullptr;
		int contTratamiento = 0;//si este cont aumenta significa que al tumor no le pde realizar sesiones pq me pasaria de radiacion max
		//si cont tratamiento es igual a mi cantidad de tumores, significa que temine el tratamiento
		for (int i=0; i< paciente->GET_TUMORES().size();i++)
		{
			tumor = paciente->GET_TUMORES()[i];
			if (ficha->aDosisMax > (ficha->aRadiacionAcum + tumor->GET_DOSISXSESION()))//cheque de no pasarme de mi rad max ucando agregue la sesion
			{
				if (tumor->GET_FRECUENCIA() > tumor->GET_SESIONES_REALIZADAS() && (tumor->GET_RAD_ACUM() + tumor->GET_DOSISXSESION()) < tumor->GET_DOSIS_MAX()) 
				//si a algun tumor le faltan sesiones, le agrego una
				{//al final del if estoy chequeando que cuando vaya a hacer las sesion el tipo no se pase

					paciente->GET_TUMORES()[i]->SET_SESIONES_REALIZADAS(tumor->GET_SESIONES_REALIZADAS() + 1);
					float nuevaRad = ficha->aRadiacionAcum + tumor->GET_DOSISXSESION();

					ficha->aRadiacionAcum=(nuevaRad);
					contSesiones++;
				}
			}
			else
				contTratamiento++;//va a aumentar cada vez que no haya podido hacer una sesion para no pasarme de la rad max

		}

		//a este if tambien va a entrar si no llego al maximo pero no le puedon hacer otra sesion porque se pasaria del max
		if (contSesiones == 0)//si no tuve que agregar ninguna sesion, hago que el oncologo atienda al paciente
		{
			if (contTratamiento < paciente->GET_TUMORES().size())
			{
				ficha->SET_MOTIVO(evaluacion);
				pasarFichaOncologo(ficha);
			}
			else
			{
				ficha->SET_MOTIVO(finTratamiento);
				pasarFichaOncologo(ficha);
			}
		}

	}

	delete ficha;

}

cOncologo* cCentro::buscarOncologo(int id)
{
	cOncologo* oncologoR=nullptr;
	for (cMedico* med : this->aMedicos)	//recorro el listado de medicos que tiene el centro
	{
		cOncologo* oncologo = dynamic_cast<cOncologo*>(med);//busco en mi lista de medicos a los oncologos
		if (oncologo != nullptr && oncologo->GET_ID_ONC() == id)
		{
			oncologoR=oncologo;//guardo el oncologo que necesito
		}
	}
	return oncologoR;
}



//list<cPaciente*> cCentro::buscar()
//{
//	return list<cPaciente*>();
//}

string cCentro::to_string()
{
	stringstream ss;
	ss <<"Nombre centro: "<< this->aNombre << endl <<"Direccion centro: " << this->aDireccion << endl;
	for (cFicha *it : this->aFichas)
	{
		ss << it->to_string() << endl;
	}
	for (cMedico* it : this->aMedicos)
	{
		ss << it->to_string() << endl;
	}
	return ss.str();
}
void cCentro::operator+(cMedico* medico)
{
	aMedicos.push_back(medico);
}
cListaPacientes cCentro::buscar_cincoporciento_terminar(eTipoCancer cancer)
{
	cListaPacientes auxLista;
	float cincoPorciento = 0.0;

	for (cFicha* ficha : this->aFichas)
	{
		cincoPorciento = (ficha->aDosisMax * 5 )/ 100;

		if ((ficha->aDosisMax) - cincoPorciento < ficha->aRadiacionAcum)
		{

			for (int i = 0; i < ficha->GET_PAC()->GET_TUMORES().size(); i++)//recorro los tumores de cada pac
			{
				if (ficha->aPaciente->GET_TUMORES()[i]->GET_TIPO_CANCER() == cancer)
				{
					auxLista + (ficha->GET_PAC());
				}
			}
		}

	}
	return auxLista;
}
void cCentro::imprimirPacientes()
{
	for (cFicha* ficha : aFichas)
	{
		cout << ficha;
		cout << buscarOncologo(ficha->aID_OncologoCargo);
	}
}
ostream& operator<<(ostream& out,cCentro& centro)
{
	if (&centro == nullptr)
		throw new exception("No se encontro");
	out << centro.to_string();
	return out;

}
void cCentro::imprimir()
{
	cout << this;
}
void cCentro::pasarFichaOncologo(cFicha* ficha)
{

	for (cMedico* med : this->aMedicos)	//recorro el listado de medicos que tiene el centro
	{
		cOncologo* oncologo = dynamic_cast<cOncologo*>(med);//busco en mi lista de medicos a los oncologos
		if (oncologo != nullptr && oncologo->GET_ID_ONC() == ficha->GET_ONC())
		{
			oncologo->atenderPaciente(ficha);//el paciente lo va a antender su oncologo
		}
	}
	return ;
}
void cCentro::pasarFichaDosimetrista(cFicha* ficha)
{

	for (cMedico* med : this->aMedicos)
	{
		cDosimetrista* dosimetrista = dynamic_cast<cDosimetrista*>(med);//busco en mi lista de medicos al dosimetrista
		if (dosimetrista != nullptr && dosimetrista->GET_ID_DOS() == ficha->GET_DOS())
		{
			dosimetrista->atenderPaciente(ficha);//el paciente lo va a atender su dosimetrista
		}
	}
	return;
}
cFicha* cCentro::buscarFicha(cPaciente* paciente)
{
	cFicha* retorno=nullptr;
	retorno=aFichas[paciente];//busco en mi lista de fichas a mi paciente
	return retorno;

}
cListaPacientes cCentro::buscarTerapiaTumor(eTipoCancer cancer, eTratamiento trat)
{
	cTratamiento* tratamiento=nullptr;
	cListaPacientes auxLista;
	for (cFicha* ficha : this->aFichas)//recorro la lista de fichas
	{
		for (int i = 0; i < ficha->GET_PAC()->GET_TUMORES().size(); i++)//recorro los tumores de cada pac
		{
			tratamiento = nullptr;//rehinicio tratamiento
			if (trat == braquiterapia)
			{
				cBraquiterapia* terap = dynamic_cast<cBraquiterapia*>(ficha->GET_PAC()->GET_TUMORES()[i]->GET_TRATAMIENTO());
				tratamiento = terap;
			}
			else if (trat == sistemica)
			{
				cSistemica* terap = dynamic_cast<cSistemica*>(ficha->GET_PAC()->GET_TUMORES()[i]->GET_TRATAMIENTO());
				tratamiento = terap;
			}
			else
				cRadioterapia* terap = dynamic_cast<cRadioterapia*>(ficha->GET_PAC()->GET_TUMORES()[i]->GET_TRATAMIENTO());
			
			if (ficha->GET_PAC()->GET_TUMORES()[i]->GET_TIPO_CANCER() == cancer && tratamiento != nullptr)
			{
				auxLista +(ficha->GET_PAC());
			}
		}
	}
	return auxLista;
}
void cCentro::agregarFicha(cFicha* ficha)
{
	aFichas + ficha;//agrego mi nueva ficha con la sobrecarga de lista de fichas
	return;
}
cFicha* cCentro::crearFicha(cPaciente* paciente)
{
	
	int totalOncologos = cOncologo::cantOncologos;	//guardo la cantidad de oncologos que hay en el cntro
	int totalDosimetristas = cDosimetrista::cantDosimetrista;	//guardo la cantidad de dosimetristas que hay en el centro
	int numDosimetrista = rand() % totalDosimetristas + 1;
	int numOncologo = rand() % totalOncologos + 1;
	cFicha* nuevaFicha = new cFicha(paciente, numOncologo, numDosimetrista);//con randoms le asigne un oncologo y un dosimetrista
	agregarFicha(nuevaFicha);//agrego la ficha a mi lista
	return nuevaFicha;
}
