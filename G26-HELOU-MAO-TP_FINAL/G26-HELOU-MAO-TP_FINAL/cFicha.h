#pragma once

#include "cPaciente.h"
class cFicha {
private:
	bool aAlta;
	bool aListaEspera;
	float aRadiacionAcum;
	int aID_OncologoCargo;
	int aID_Dosimetrista;
	float aDosisMax;
	float aDosisXSesion;
	bool aAlcanzoMax;
	cPaciente aPaciente;
public:
	cFicha(bool, bool, float, int, int ,float, float, bool, cPaciente);
	cFicha(cPaciente paciente, int oncologo, int dosimetrista);
	cFicha();
	~cFicha();
	friend class cMedico;
	cPaciente* GET_PAC();
	int GET_ONC();
	int GET_DOS();
};