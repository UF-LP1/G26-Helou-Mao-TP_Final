#include "cTratamiento.h"

cTratamiento::cTratamiento(float miDosisTotal, float miDosisxSesion)
{
	this->aDosisTotal = miDosisTotal;
	this->aDosisXSesion = miDosisxSesion;
}
cTratamiento::~cTratamiento()
{

}

cTratamiento::cTratamiento(cTratamiento& copia)
{
	aDosisXSesion = copia.aDosisXSesion;
	aDosisTotal = copia.aDosisTotal;
}
cTratamiento::cTratamiento()
{
	this->aDosisTotal = 0;
	this->aDosisXSesion = 0;
}