#pragma once

#include "cMedico.h"
class cDosimetrista: public cMedico {

public:
	cDosimetrista(string, string, float);
	~cDosimetrista();
	float calcularDosisTotal();
	cTratamiento asignarTratamiento();
	void reevaluarTratamiento();
};