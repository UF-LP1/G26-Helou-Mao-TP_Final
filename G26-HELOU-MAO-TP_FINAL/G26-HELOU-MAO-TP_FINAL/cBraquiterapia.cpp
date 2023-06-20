#include "cBraquiterapia.h"
cBraquiterapia::cBraquiterapia(float miDosisTotal, float miDosisxSesion, eAtomo miAtomo)
	:cTratamiento(miDosisTotal, miDosisxSesion)
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
float cBraquiterapia::DOSIS_X_TUMOR() {
	return 0.0;
}