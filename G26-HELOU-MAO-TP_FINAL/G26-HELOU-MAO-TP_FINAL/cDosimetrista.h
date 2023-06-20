#pragma once

#include "cMedico.h"
class cDosimetrista: public cMedico {
	int numDosimetrista;
public:
	static int cantDosimetrista;
	cDosimetrista(string, string);
	~cDosimetrista();
	void calcularDosisTotal(cFicha*);
	void asignarTratamiento(cFicha*);
	void atenderPaciente(cFicha*);
	
};