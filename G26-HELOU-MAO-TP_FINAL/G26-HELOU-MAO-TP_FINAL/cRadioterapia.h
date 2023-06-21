#pragma once
#include "cTratamiento.h"
#include "eHaz.h"
class cRadioterapia : public cTratamiento {
private:
	eHaz aTipoHaz;

public:
	cRadioterapia( float miDosisxSesion, eHaz);
	~cRadioterapia();
	cRadioterapia();
	void DOSIS_X_TUMOR();
	void aumentar_dosis();
};