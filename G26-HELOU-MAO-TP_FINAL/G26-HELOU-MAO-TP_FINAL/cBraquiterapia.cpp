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
void cBraquiterapia::aumentar_dosis()
{
}
void cBraquiterapia::DOSIS_X_TUMOR() {
	srand(time(NULL));
	float dosis = rand() % 3 + 6;
	this->aDosisXSesion = dosis;
}