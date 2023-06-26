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
	virtual void DOSIS_X_TUMOR()=0;
	virtual void aumentar_dosis()=0;
};