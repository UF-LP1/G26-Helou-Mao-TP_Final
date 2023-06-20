#pragma once
#include "cTratamiento.h"
#include "eHaz.h"
class cRadioterapia : public cTratamiento {
private:
	eHaz aTipoHaz;

public:
	cRadioterapia(float miDosisTotal, float miDosisxSesion, eHaz);
	~cRadioterapia();
	cRadioterapia();
	float DOSIS_X_TUMOR();
};