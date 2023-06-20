#include "cPaciente.h"

cPaciente::cPaciente( string miNombre, string miApellido, string miDni, string miContacto, string miFechaNac, char miSexo, string miTipoSangre, float miSaludGral)
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
bool cPaciente ::operator==(cPaciente& pac)
{
	bool retorno = false;
	if (this->aDNI == pac.aDNI)
	{
		retorno = true;
	}
	return retorno;
}

cPaciente::cPaciente()
{
	this->aNombre = "";
	this->aApellido = "";
	this->aDNI = "";
	this->aContacto = "";
	this->aFechaNac = "";
	this->aSexo = ' ';
	this->aTipoSangre = "";
	this->aSaludGral = 0.0;
}

void cPaciente::operator=(cPaciente* pac)
{
	this->aApellido = pac->aApellido;
	this->aContacto = pac->aContacto;
	this->aDNI = pac->aDNI;
	this->aFechaNac = pac->aFechaNac;
	this->aNombre = pac->aNombre;
	this->aSaludGral = pac->aSaludGral;
	this->aSexo = pac->aSexo;
	this->aTipoSangre = pac->aTipoSangre;
	this->aTumores = pac->aTumores;
	return;
}

void cPaciente::SET_TUMORES(list <cTumor*> tumores)
{
	this->aTumores = tumores;
}

list <cTumor*> *cPaciente::GET_TUMORES()
{
	return &aTumores;
}
