#pragma once

#include "cMedico.h"
class cDosimetrista: public cMedico {
	int numDosimetrista;
public:
	static int cantDosimetrista;
	cDosimetrista(string, string);
	~cDosimetrista();
	float calcularDosisTotal(cFicha*);
	cTratamiento asignarTratamiento(cFicha*);
	void atenderPaciente(cFicha*);
};