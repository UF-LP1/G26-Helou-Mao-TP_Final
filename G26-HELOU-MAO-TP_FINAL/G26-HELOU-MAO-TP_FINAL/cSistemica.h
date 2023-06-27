#pragma once
#include "cTratamiento.h"
class cSistemica : public cTratamiento {

public:
	cSistemica( float miDosisxSesion);
	~cSistemica();
	cSistemica();
	void DOSIS_X_TUMOR();
	cSistemica& operator=(const cSistemica& trat);
};