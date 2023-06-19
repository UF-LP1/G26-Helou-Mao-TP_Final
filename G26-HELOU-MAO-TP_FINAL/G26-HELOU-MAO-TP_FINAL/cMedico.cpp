#include "cMedico.h"


int cMedico::cantEmpleados = 0;
cMedico::cMedico(string miNombre, string miApellido):aNroEmplpeado(++cantEmpleados)
{
	this->aNombre = miNombre;
	this->aApellido = miApellido;
}

cMedico::~cMedico() {

}
int cMedico::GET_ID()
{
	return this->aNroEmplpeado;
}