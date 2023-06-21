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
cCentro::cCentro(string miNombre, string miDireccion)
{
	this->aNombre = miNombre;
	this->aDireccion = miDireccion;
}
cCentro::~cCentro()
{

}
void cCentro::contactar() {
	for (cFicha* it : this->aFichas)
	{
		
		//if(it->GET_PAC().GET)
	}
}
void cCentro::atenderPaciente(cPaciente* paciente)
{
	srand(time(NULL));
	cFicha* busqueda;//creo variable para guardar
	busqueda = buscarFicha(paciente);//busco paciente en mi lista de fichas
	if (busqueda == nullptr)//el paciente aun no tiene ficha
	{
		busqueda = crearFicha(paciente);//creo una ficha para el paciente
		pasarFichaOncologo(busqueda);
		pasarFichaDosimetrista(busqueda);
		pasarFichaOncologo(busqueda);
	}
	else if (busqueda->GET_DOSIS_MAX() == busqueda->GET_RAD_ACUM())//el paciente termino el tratamiento
	{
		busqueda->SET_ALCANZO_MAX(true);
		busqueda->SET_MOTIVO(finTratamiento);
		pasarFichaOncologo(busqueda);
	}
	else if (busqueda->GET_ESPERADO() == true)	//podriamos chequear si esta dado de alta que se haga una reevaluacion
	{
		//habria que chequear que termino su tiempo de espera
		busqueda->SET_MOTIVO(reevaluacion);
		pasarFichaOncologo(busqueda);
		pasarFichaDosimetrista(busqueda);
		pasarFichaOncologo(busqueda);
	}
	else //chequeo si a algun tumor le faltan sesiones
	{
		list<cTumor*>* auxTumores = paciente->GET_TUMORES();
		int contSesiones = 0;
		int contTratamiento = 0;//si este cont aumenta significa que al tumor no le pde realizar sesiones pq me pasaria de radiacion max
		//si cont tratamiento es igual a mi cantidad de tumores, significa que temine el tratamiento
		for (cTumor* tumor : *auxTumores)
		{
			if (busqueda->GET_DOSIS_MAX() > (busqueda->GET_RAD_ACUM() + tumor->GET_DOSISXSESION()))//cheque de no pasarme de mi rad max ucando agregue la sesion
			{
				if (tumor->GET_FRECUENCIA() < tumor->GET_SESIONES_REALIZADAS() && (tumor->GET_RAD_ACUM() + tumor->GET_DOSISXSESION()) < tumor->GET_DOSIS_MAX()) 
				//si a algun tumor le faltan sesiones, le agrego una
				{//al final del if estoy chequeando que cuando vaya a hacer las sesion el tipo no se pase

					tumor->SET_SESIONES_REALIZADAS(tumor->GET_SESIONES_REALIZADAS() + 1);
					float nuevaRad = busqueda->GET_RAD_ACUM() + tumor->GET_DOSISXSESION();
					busqueda->SET_RAD_ACUM(nuevaRad);
					contSesiones++;
				}
			}
			else
				contTratamiento++;//va a aumentar cada vez que no haya podido hacer una sesion para no pasarme de la rad max
			
		}

		//a este if tambien va a entrar si no llego al maximo pero no le puedon hacer otra sesion porque se pasaria del max
		if (contSesiones == 0)//si no tuve que agregar ninguna sesion, hago que el oncologo atienda al paciente
		{
			if (contTratamiento < auxTumores->size())
			{
				busqueda->SET_MOTIVO(evaluacion);
				pasarFichaOncologo(busqueda);
			}
			else
			{
				busqueda->SET_MOTIVO(finTratamiento);
				pasarFichaOncologo(busqueda);
			}
		}

	}

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
		ss << it << endl;
	}
	for (cMedico* it : this->aMedicos)
	{
		ss << it << endl;
	}
	return ss.str();
}
void cCentro::operator+(cMedico* medico)
{
	aMedicos.push_back(medico);
}
ostream& operator<<(ostream& out,cCentro& centro)
{
	if (&centro == nullptr)
		throw new exception("No se encontro");
	out << centro.to_string();;
	return out;

}
void cCentro::imprimir()
{
	cout << this;
}
void cCentro::pasarFichaOncologo(cFicha* ficha)
{

	for (cMedico* med : this->aMedicos)
	{
		cOncologo* oncologo = dynamic_cast<cOncologo*>(med);//busco en mi lista de medicos a los oncologos
		if (med != nullptr && med->GET_ID() == ficha->GET_ONC())
		{
			med->atenderPaciente(ficha);//el paciente lo va a antender su oncologo
		}
	}
	return ;
}
void cCentro::pasarFichaDosimetrista(cFicha* ficha)
{

	for (cMedico* med : this->aMedicos)
	{
		cDosimetrista* dosimetrista = dynamic_cast<cDosimetrista*>(med);//busco en mi lista de medicos al dosimetrista
		if (med != nullptr && med->GET_ID() == ficha->GET_DOS())
		{
			med->atenderPaciente(ficha);//el paciente lo va a atender su dosimetrista
		}
	}
	return;
}
cFicha* cCentro::buscarFicha(cPaciente* paciente)
{
	cFicha* retorno;
	retorno=aFichas[paciente];//busco en mi lista de fichas a mi paciente
	return aFichas[paciente];
	delete retorno;
}
void cCentro::agregarFicha(cFicha* ficha)
{
	aFichas + ficha;//agrego mi nueva ficha con la sobrecarga de lista de fichas
	return;
}
cFicha* cCentro::crearFicha(cPaciente* paciente)
{
	srand(time(NULL));
	
	int totalOncologos = cOncologo::cantOncologos;
	int totalDosimetristas = cDosimetrista::cantDosimetrista;
	int numDosimetrista = rand() % totalDosimetristas + 1;
	int numOncologo = rand() % totalOncologos + 1;
	cFicha* nuevaFicha = new cFicha(*paciente, numOncologo, numDosimetrista);//con randoms le asigne un oncologo y un dosimetrista
	agregarFicha(nuevaFicha);//agrego la ficha a mi lista
	return nuevaFicha;
}
