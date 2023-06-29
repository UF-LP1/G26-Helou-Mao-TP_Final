#include "cSistemica.h"

cSistemica ::cSistemica( float miDosisxSesion)
	:cTratamiento(miDosisxSesion)
{

}
cSistemica::~cSistemica()
{

}
cSistemica::cSistemica()
	:cTratamiento()
{
}
void cSistemica::DOSIS_X_TUMOR() {
	//por ser sistemica tiene esos limites caracteristicos de este tipo de trat
	float dosis =rand() % 3 + 2;
	this->aDosisXSesion = dosis;
}

cSistemica& cSistemica::operator=(const cSistemica& trat)
{
	if (&trat != this)
	{
		aDosisXSesion = trat.aDosisXSesion;
	}
	return *this;

}


