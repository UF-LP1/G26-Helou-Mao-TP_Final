#include "cRadioterapia.h"

cRadioterapia:: cRadioterapia(float miDosisTotal, float miDosisxSesion, eHaz miHaz)
	:cTratamiento(miDosisTotal, miDosisxSesion)
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
float cRadioterapia::DOSIS_X_TUMOR() {
	return 0.0;
}