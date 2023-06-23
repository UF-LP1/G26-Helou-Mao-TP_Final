#include "cTratamiento.h"

cTratamiento::cTratamiento( float miDosisxSesion)
{

	this->aDosisXSesion = miDosisxSesion;
}
cTratamiento::~cTratamiento()
{

}

cTratamiento::cTratamiento(cTratamiento& copia)
{
	aDosisXSesion = copia.aDosisXSesion;

}
cTratamiento::cTratamiento()
{

	this->aDosisXSesion = 0;
}

float cTratamiento::GET_DOSISXSESION()
{
	return this->aDosisXSesion;
}

void cTratamiento::DOSIS_X_TUMOR()
{
	this->aDosisXSesion = 1;
}

void cTratamiento::aumentar_dosis()
{
	this->aDosisXSesion =aDosisXSesion+ 1;
}
