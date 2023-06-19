#include "cDosimetrista.h"

cDosimetrista::cDosimetrista(string miNombre, string miApellido, float miNumero)
	:cMedico(miNombre, miApellido, miNumero)
{

}
cDosimetrista::~cDosimetrista()
{

}
float cDosimetrista::calcularDosisTotal()
{
	return 0.0;
}
cTratamiento cDosimetrista::asignarTratamiento()
{

	return;
}
void cDosimetrista::atenderPaciente()
{
}
