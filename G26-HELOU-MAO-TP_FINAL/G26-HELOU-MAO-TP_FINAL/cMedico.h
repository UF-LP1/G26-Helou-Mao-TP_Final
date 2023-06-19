#pragma once
#include "cPaciente.h"

class cMedico {
private: 
	string aNombre;
	string aApellido;
	int aNroEmplpeado;
public:
	cMedico(string, string, int);
	~cMedico();
	virtual void atenderPaciente() = 0;

};