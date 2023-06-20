#pragma once
#include "cTratamiento.h"
class cSistemica : public cTratamiento {

public:
	cSistemica(float miDosisTotal, float miDosisxSesion);
	~cSistemica();
	cSistemica();
	float DOSIS_X_TUMOR();
};