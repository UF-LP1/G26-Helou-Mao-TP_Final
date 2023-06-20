#pragma once

#include "cPaciente.h"
#include "cAsistencia.h"
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
	unsigned int aTiempoEspera;
	cAsistencia aAsistencia;
public:
	cFicha(bool, bool, float, int, int ,float, float, bool, cPaciente, cAsistencia);
	cFicha(cPaciente paciente, int oncologo, int dosimetrista);
	cFicha();
	~cFicha();
	friend class cMedico;
	cPaciente* GET_PAC();
	int GET_ONC();
	int GET_DOS();
	void SET_PACIENTE(cPaciente* pac);
	void SET_DOSIS_MAX(float dosisMax);
	void SET_ALTA(bool alta);
	void SET_TIEMPO_ESPERA(unsigned int tiempoEspera);
	void SET_ESPERADO(bool enEspera);
	cAsistencia GET_ASISTENCIA();
	void SET_ASISTENCIA(cAsistencia asist);
};

