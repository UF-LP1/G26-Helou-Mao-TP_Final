#pragma once

#include "cMedico.h"
class cDosimetrista: public cMedico {
	int numDosimetrista;
public:
	static unsigned int cantDosimetrista;
	cDosimetrista(string, string);
	~cDosimetrista();
	int GET_ID_DOS();
	void calcularDosisTotal(cFicha*);
	void asignarTratamiento(cFicha*);
	void atenderPaciente(cFicha*);
	string to_string();
	friend ostream& operator<<(ostream& out, cDosimetrista& imprimir);
	
};