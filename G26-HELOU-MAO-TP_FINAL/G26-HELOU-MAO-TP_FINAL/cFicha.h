#pragma once

#include "cOncologo.h"
class cFicha {
private:
	bool aAlta;
	bool aListaEspera;
	float aRadiacionAcum;
	cOncologo aOncologoCargo;
	float aDosisXSesion;
	bool aAlcanzoMax;
	time_t aFechaIngreso;
	cPaciente aPaciente;
public:
	cFicha(bool, bool, float, cOncologo, float, bool, time_t, cPaciente);
	~cFicha();
};