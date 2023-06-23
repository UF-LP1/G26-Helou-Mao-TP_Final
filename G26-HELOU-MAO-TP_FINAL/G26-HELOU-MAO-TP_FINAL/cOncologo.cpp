#include "cOncologo.h"

unsigned int cOncologo::cantOncologos = 0;
cOncologo::cOncologo(string miNombre, string miApellido) 
:cMedico(miNombre, miApellido) 
{
	this->numeroOncologo = ++cantOncologos;
}
cOncologo::~cOncologo() {

}


void cOncologo::evaluarPac(cFicha* ficha)
{
	cListaTumores auxTumores = ficha->GET_PAC()->GET_TUMORES();
	int cambiarCant = rand() % (ficha->GET_PAC()->GET_TUMORES().size());
	int tamanioNuevo = rand() % 4;
	int contVueltas = 0;
	int Alta = rand() % 10; //por random defino que se le fueron los tumores al paciente o no

	for (int i=0; i < ficha->GET_PAC()->GET_TUMORES().size(); i++)
	{
		ficha->GET_PAC()->GET_TUMORES()[i]->SET_SESIONES_REALIZADAS(0);
		if (Alta < 3)
		{
			//te curaste
			auxTumores - ficha->GET_PAC()->GET_TUMORES()[i];
		}
		else 
		{
				//aca se va a modificar los tumores
			if (contVueltas == cambiarCant)//busco el tumor qu equiero modificar
			{
				ficha->GET_PAC()->GET_TUMORES()[i]->SET_TAMANIO(eTamanio(tamanioNuevo));
			}	
		}
		contVueltas++;
	}
	if (Alta <3)
	{
		ficha->GET_PAC()->SET_TUMORES(auxTumores);//le pongo la que fui haciendo cuando elimine
		darAlta(ficha);
	}
	ficha->GET_PAC()->SET_TUMORES(auxTumores);
	
}

string cOncologo::to_string()
{
	stringstream ss;
	ss << "Nombre oncologo : " << this->aNombre << endl;
	ss << "Apellido oncologo: " << this->aApellido << endl;
	ss << "ID: " << this->aNroEmplpeado << endl;
	return ss.str();
}

int cOncologo::GET_ID_ONC()
{
	return this->numeroOncologo;
}


//void cOncologo::asignarFrecSemanal(cFicha*) {
//
//} está hecho en diagnosticar tumores

void cOncologo::asignarDosisXSesion(cFicha* ficha) {

	for (int i=0; i< ficha->GET_PAC()->GET_TUMORES().size(); i++)
	{
		ficha->GET_PAC()->GET_TUMORES()[i]->aTipoTratamiento->DOSIS_X_TUMOR();//esta funcion, de acuerdo al tipo de tratamiento hace un random para designar canridad de rad
		ficha->GET_PAC()->GET_TUMORES()[i]->SET_DOSISXSESION(ficha->GET_PAC()->GET_TUMORES()[i]->GET_TRATAMIENTO()->GET_DOSISXSESION());//seteo la radiacio 
	}

}
void cOncologo::darAlta(cFicha* ficha) {
	if (ficha->GET_PAC()->GET_TUMORES().size() == 0)
		ficha->SET_ALTA(true);
}
void cOncologo::asignarTiempoEspera(cFicha* ficha) {
	unsigned int tiempoEspera = rand() % 4 + 1; //tiempo de espera es la cantidad de meses que va a tener que esperar para volver a irradiarse. Como minimo tendra que esperar un mes y como maximo 4
	ficha->SET_TIEMPO_ESPERA(tiempoEspera);
	ficha->SET_ESPERADO(true);
}

void cOncologo::atenderPaciente(cFicha* ficha)
{
	if (ficha->GET_MOTIVO() == diagnostico)	//la primera vez
	{
		if (ficha->GET_PAC()->GET_TUMORES().size() == 0)
			diagnosticarTumores(ficha);
		else
		{
			asignarDosisXSesion(ficha);
		}

	}
	else if (ficha->GET_MOTIVO() == evaluacion)	//sigo en tratamiento, entra cada semana
	{
		evaluarPac(ficha);//aca se va a chequear el estado de los tumores (se los va a achicar o agrandar aca tambien
	}
	else if (ficha->GET_MOTIVO() == finTratamiento)	//se alcanzo la radiacion maxima
	{
		evaluarPac(ficha);
		if(ficha->GET_ALTA()!=true)
			asignarTiempoEspera(ficha);
	}
}

void cOncologo::diagnosticarTumores(cFicha* ficha)
{
	unsigned int cantTumores = rand() % 10 + 1;
	unsigned int auxTamanio = 0;
	eTamanio tamanio;
	unsigned int auxTipoCancer = 0;
	unsigned int frecuencia = 0;
	cPaciente* pac=ficha->GET_PAC();
	cListaTumores tumoresAux;
	cTumor* tumor ;
	cTumor auxtumor;
	tumor = &auxtumor;
	for (int i = 0; i < cantTumores; i++)
	{
		auxTipoCancer = rand() % 11;
		tumor->SET_TIPO_CANCER(eTipoCancer(auxTipoCancer));

		auxTamanio = rand() % 3;
		tumor->SET_TAMANIO(eTamanio(auxTamanio));

		frecuencia =(int )rand() % 6+1;
		tumor->SET_FRECUENCIA(frecuencia);

		tumoresAux+tumor;
	}
	pac->SET_TUMORES(tumoresAux);

	ficha->SET_PACIENTE(pac);
	return;
	

}

ostream& operator<<(ostream& out, cOncologo& oncologo)
{
	out << oncologo.to_string();
	return out;
	
}
