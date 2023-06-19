#pragma once
#include "Header.h"
class cTratamiento {
private:
	float aDosisXSesion;
	float aDosisTotal;
public:
	cTratamiento(float, float);
	cTratamiento(cTratamiento&);
	~cTratamiento();

};