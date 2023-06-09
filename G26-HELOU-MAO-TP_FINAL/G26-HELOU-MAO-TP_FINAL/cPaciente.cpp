#include "cPaciente.h"

cPaciente::cPaciente(list<cTumor> misTumores, string miNombre, string miApellido, string miDni, string miContacto, time_t miFechaNac, char miSexo, string miTipoSangre, float miSaludGral)
{
	//this->aTumores = misTumores;
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