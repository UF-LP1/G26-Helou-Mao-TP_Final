#include "cSistemica.h"

cSistemica ::cSistemica(float miDosisTotal, float miDosisxSesion)
	:cTratamiento(miDosisTotal,miDosisxSesion)
{

}
cSistemica::~cSistemica()
{

}
cSistemica::cSistemica()
	:cTratamiento()
{
}
float cSistemica::DOSIS_X_TUMOR() {
	return 0.0;
}