#pragma once

#include "cFicha.h"
using namespace std;
class cMedico {
private: 
	string aNombre;
	string aApellido;
	const int aNroEmplpeado;

public:
	static int cantEmpleados;
	cMedico(string, string);
	~cMedico();
	virtual void atenderPaciente(cFicha*) = 0;
	int GET_ID();

};