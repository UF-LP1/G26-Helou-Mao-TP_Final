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
	srand(time(NULL));
	float dosis = rand() % 3 + 2;
	this->aDosisXSesion = dosis;
}

void cSistemica::aumentar_dosis()
{
}
