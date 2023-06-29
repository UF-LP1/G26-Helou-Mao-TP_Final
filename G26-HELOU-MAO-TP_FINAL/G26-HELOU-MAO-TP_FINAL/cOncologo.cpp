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
	//va a entrar cuando la cantidad de sesiones realizadas sea igual a la frec en todos los tumores
	cListaTumores auxTumores = ficha->GET_PAC()->GET_TUMORES();
	int cambiarCant = rand() % (ficha->GET_PAC()->GET_TUMORES().size());//dedino que tumor  modificar
	int tamanioNuevo = rand() % 3;//defino nuevo tamanio del tumor

	int Alta = rand() % 10; //por random defino que se le fueron los tumores al paciente o no

	for (int i=0; i < ficha->GET_PAC()->GET_TUMORES().size(); i++)
	{
		ficha->GET_PAC()->GET_TUMORES()[i]->SET_SESIONES_REALIZADAS(0);
		if (Alta < 3) //se le van a ir toods los tumores
		{
			//te curaste
			auxTumores - ficha->GET_PAC()->GET_TUMORES()[i];
		}
		else 
		{
				//aca se va a modificar los tumores
			if (i == cambiarCant)//busco el tumor que quiero modificar
			{
				ficha->GET_PAC()->GET_TUMORES()[i]->SET_TAMANIO(eTamanio(tamanioNuevo));
			}	
		}
	
	}
	if (Alta <3)
	{
		ficha->GET_PAC()->SET_TUMORES(auxTumores);//le pongo la lista que fui haciendo cuando elimine los tumores
		darAlta(ficha);//doy alta al pac
		ficha->SET_MOTIVO(finTratamiento);
	}

	return;
}

string cOncologo::to_string()
{
	stringstream ss;
	ss << "Nombre oncologo : " << this->aNombre << endl;
	ss << "Apellido oncologo: " << this->aApellido << endl;
	ss << "ID Oncologo: " << this->aNroEmplpeado << endl;
	return ss.str();
}

int cOncologo::GET_ID_ONC()
{
	return this->numeroOncologo;
}


void cOncologo::asignarDosisXSesion(cFicha* ficha) {

	for (int i=0; i< ficha->GET_PAC()->GET_TUMORES().size(); i++)
	{
		ficha->GET_PAC()->GET_TUMORES()[i]->GET_TRATAMIENTO()->DOSIS_X_TUMOR();//esta funcion, de acuerdo al tipo de tratamiento (es virtual pura) hace un random para designar cantidad de rad
		ficha->GET_PAC()->GET_TUMORES()[i]->SET_DOSISXSESION(ficha->GET_PAC()->GET_TUMORES()[i]->GET_TRATAMIENTO()->GET_DOSISXSESION());//seteo la radiacio n
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
		evaluarPac(ficha);//aca se va a chequear el estado de los tumores y se les va a cambiar el tamanio
	}
	else if (ficha->GET_MOTIVO() == finTratamiento)	//se alcanzo la radiacion maxima
	{
		evaluarPac(ficha); //si lo evalua y considera que no esta curado va a tener que mandarlo a tiempo de espera
		if(ficha->GET_ALTA()!=true)
			asignarTiempoEspera(ficha);
	}
}

void cOncologo::diagnosticarTumores(cFicha* ficha)
{
	unsigned int cantTumores = rand() % 10 + 1;
	cPaciente* pac=ficha->GET_PAC();
	cListaTumores tumoresAux;

	for (int i = 0; i < cantTumores; i++)
	{
		cTumor* tumor = new cTumor(eTipoCancer(rand() % 11), eTamanio(rand() % 3), 0.0, 0.0, 0.0, rand() % 6 + 1);//por randoms asigna las caract del tumor
		tumoresAux+*tumor;
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

bool cOncologo::operator==(int id)
{
	if (this->numeroOncologo == id)
		return true;
	return false;
}