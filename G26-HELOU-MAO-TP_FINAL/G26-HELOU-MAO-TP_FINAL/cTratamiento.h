#pragma once
#include "Header.h"
class cTratamiento {
protected:
	float aDosisXSesion;

public:
	cTratamiento(float);
	cTratamiento(cTratamiento&);
	~cTratamiento();
	cTratamiento();
	float GET_DOSISXSESION();
	virtual void DOSIS_X_TUMOR();
	virtual void aumentar_dosis();
};