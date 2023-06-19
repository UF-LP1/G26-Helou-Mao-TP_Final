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
	eTamanio auxTamanio;
	eTipoCancer auxTipo;

	int cantTumores = rand() % 10 + 1;
	for (int i = 0; i < cantTumores; i++)
	{
		int numero = rand() % 10 + 1;

	
	}
}
