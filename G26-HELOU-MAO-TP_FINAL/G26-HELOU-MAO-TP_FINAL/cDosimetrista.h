#pragma once

#include "cMedico.h"
class cDosimetrista: public cMedico {
public:
	float calcularDosisTotal();
	cTratamiento asignarTratamirnto();
	void reevaluarTratamiento();
};