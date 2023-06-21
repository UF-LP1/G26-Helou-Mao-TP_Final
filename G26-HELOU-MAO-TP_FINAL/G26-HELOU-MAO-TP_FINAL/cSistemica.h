#pragma once
#include "cTratamiento.h"
class cSistemica : public cTratamiento {

public:
	cSistemica( float miDosisxSesion);
	~cSistemica();
	cSistemica();
	void DOSIS_X_TUMOR();
	void aumentar_dosis();
};