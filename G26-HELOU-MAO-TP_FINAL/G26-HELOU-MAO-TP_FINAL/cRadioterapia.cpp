#include "cRadioterapia.h"

cRadioterapia:: cRadioterapia(float miDosisTotal, float miDosisxSesion, eHaz miHaz)
	:cTratamiento(miDosisTotal, miDosisxSesion)
{
	this->aTipoHaz = miHaz;
}
cRadioterapia::~cRadioterapia()
{

}