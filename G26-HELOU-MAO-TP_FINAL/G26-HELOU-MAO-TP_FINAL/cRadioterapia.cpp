#include "cRadioterapia.h"

cRadioterapia:: cRadioterapia( float miDosisxSesion, eHaz miHaz)
	:cTratamiento( miDosisxSesion)
{
	this->aTipoHaz = miHaz;
}
cRadioterapia::~cRadioterapia()
{

}
cRadioterapia::cRadioterapia() :
	cTratamiento()
{
	this->aTipoHaz = fotones;
}
void cRadioterapia::DOSIS_X_TUMOR() {
	srand(time(NULL));
	float dosis = rand() % 2 + 1;
	this->aDosisXSesion = dosis;
}


cRadioterapia& cRadioterapia:: operator=(const cRadioterapia& trat)
{
	if (&trat != this)
	{
		aDosisXSesion = trat.aDosisXSesion;
		aTipoHaz = trat.aTipoHaz;
	}
	return *this;

}
