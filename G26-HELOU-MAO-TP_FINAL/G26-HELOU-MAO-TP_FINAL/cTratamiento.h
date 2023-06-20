#pragma once
#include "Header.h"
class cTratamiento {
protected:
	float aDosisXSesion;
	float aDosisTotal;
public:
	cTratamiento(float, float);
	cTratamiento(cTratamiento&);
	~cTratamiento();
	cTratamiento();
	virtual float DOSIS_X_TUMOR() = 0;

};