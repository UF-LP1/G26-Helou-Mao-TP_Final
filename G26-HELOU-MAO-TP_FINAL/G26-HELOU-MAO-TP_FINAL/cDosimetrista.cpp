#include "cDosimetrista.h"

int cDosimetrista::cantDosimetrista = 0;
cDosimetrista::cDosimetrista(string miNombre, string miApellido)
	:cMedico(miNombre, miApellido)
{
	this->numDosimetrista = ++cantDosimetrista;
}
cDosimetrista::~cDosimetrista()
{

}
float cDosimetrista::calcularDosisTotal(cFicha*)
{
	return 0.0;
}
cTratamiento cDosimetrista::asignarTratamiento(cFicha*)
{

	return;
}
void cDosimetrista::atenderPaciente(cFicha*)
{
}
