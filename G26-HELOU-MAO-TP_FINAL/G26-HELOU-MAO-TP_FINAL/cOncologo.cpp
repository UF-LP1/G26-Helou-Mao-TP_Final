#include "cOncologo.h"

int cOncologo::cantOncologos = 0;
cOncologo::cOncologo(string miNombre, string miApellido) 
:cMedico(miNombre, miApellido) 
{
	this->numeroOncologo = ++cantOncologos;
}
cOncologo::~cOncologo() {

}


void cOncologo::evaluarPac(cFicha*)
{

}
void cOncologo::reevaluarTratamiento(cFicha*) {

}
void cOncologo::actualizarFicha(cFicha*)
{

}
void cOncologo::asignarFrecSemanal(cFicha*) {

}
void cOncologo::asignarDosisXSesion(cFicha*) {

}
void cOncologo::darAlta(cFicha*) {

}
int cOncologo::asignarTiempoEspera(cFicha*) {
	return 0;
}

void cOncologo::atenderPaciente(cFicha*)
{
}

void cOncologo::diagnosticarTumores(cFicha* ficha)
{
	srand(time(NULL));
	unsigned int cantTumores = rand() % 10 + 1;
	unsigned int auxTamanio = 0;
	unsigned int auxTipoCancer = 0;
	unsigned int frecuencia = 0;
	cPaciente* pac=ficha->GET_PAC();
	list<cTumor*> tumoresAux;
	cTumor *tumor=new cTumor(); 
	for (int i = 0; i < cantTumores; i++)
	{
		auxTipoCancer = rand() % 11;
		tumor->SET_TIPO_CANCER(eTipoCancer(auxTipoCancer));
		auxTamanio = rand() % 3;
		tumor->SET_TAMANIO(eTamanio(auxTamanio));
		frecuencia = rand() % 6;
		tumor->SET_FRECUENCIA(frecuencia);

		tumoresAux.push_back(tumor);
	}
	pac->SET_TUMORES(tumoresAux);
	delete tumor;
	ficha->SET_PACIENTE(pac);
	return;
}
