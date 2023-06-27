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


cTratamiento& cTratamiento::operator=(const cTratamiento& trat)
{
    if (&trat != this)
    {
		aDosisXSesion = trat.aDosisXSesion;
    }
    return *this;
}
