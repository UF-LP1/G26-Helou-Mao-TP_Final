#include "cPaciente.h"

cPaciente::cPaciente( string miNombre, string miApellido, string miDni, string miContacto, time_t miFechaNac, char miSexo, string miTipoSangre, float miSaludGral)
{

	this->aNombre = miNombre;
	this->aApellido = miApellido;
	this->aDNI = miDni;
	this->aContacto = miContacto;
	this->aFechaNac = miFechaNac;
	this->aSexo = miSexo;
	this->aTipoSangre = miTipoSangre;
	this->aSaludGral = miSaludGral;
}
cPaciente::~cPaciente()
{

}

cPaciente::cPaciente()
{
	this->aNombre = "";
	this->aApellido = "";
	this->aDNI = "";
	this->aContacto = "";
	this->aFechaNac = 0;
	this->aSexo = ' ';
	this->aTipoSangre = "";
	this->aSaludGral = 0.0;
}
