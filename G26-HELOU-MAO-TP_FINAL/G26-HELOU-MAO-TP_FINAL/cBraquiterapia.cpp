#include "cBraquiterapia.h"
cBraquiterapia::cBraquiterapia( float miDosisxSesion, eAtomo miAtomo)
	:cTratamiento( miDosisxSesion)
{
	this->aAtomoRadioactivo = miAtomo;
}
cBraquiterapia::~cBraquiterapia()
{

}
eAtomo cBraquiterapia::GET_ATOMO()
{
	return this->aAtomoRadioactivo;
}
cBraquiterapia::cBraquiterapia() :cTratamiento()
{
	this->aAtomoRadioactivo = yodoRadioactivo;
}

void cBraquiterapia::DOSIS_X_TUMOR() {
	float dosis =rand() % 3 + 6;
	this->aDosisXSesion = dosis;
}

cBraquiterapia& cBraquiterapia::operator=(const cBraquiterapia& trat)
{
	if (&trat != this)
	{
		aDosisXSesion = trat.aDosisXSesion;
		aAtomoRadioactivo = trat.aAtomoRadioactivo;
	}
	return *this;
}
