#include "cTratamiento.h"

cTratamiento::cTratamiento(float miDosisTotal, float miDosisxSesion)
{
	this->aDosisTotal = miDosisTotal;
	this->aDosisXSesion = miDosisxSesion;
}
cTratamiento::~cTratamiento()
{

}
cTratamiento& cTratamiento::operator=(cTratamiento& otro)
{
	aDosisXSesion = otro.aDosisXSesion;
	aDosisTotal= otro.aDosisTotal;
	return *this;
}
float aDosisXSesion;
float aDosisTotal;