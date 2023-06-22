#pragma once

#include "cMedico.h"
class cDosimetrista: public cMedico {
	int numDosimetrista;
public:
	static int cantDosimetrista;
	cDosimetrista(string, string);
	~cDosimetrista();
	int GET_ID_DOS();
	void calcularDosisTotal(cFicha*);
	void asignarTratamiento(cFicha*);
	void atenderPaciente(cFicha*);
	
};