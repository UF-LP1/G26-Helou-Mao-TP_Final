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
	eMotivo aMotivo;
public:
	cFicha(bool, bool, float, int, int ,float, float, bool, cPaciente, cAsistencia, eMotivo motivo=diagnostico);
	cFicha(cPaciente paciente, int oncologo, int dosimetrista, eMotivo motivo = diagnostico);
	cFicha(eMotivo motivo = diagnostico);
	~cFicha();
	friend class cMedico;
	int GET_ONC();
	int GET_DOS();
	cPaciente* GET_PAC();
	void SET_PACIENTE(cPaciente* pac);
	float GET_DOSIS_MAX();
	void SET_DOSIS_MAX(float dosisMax);
	bool GET_ALTA();
	void SET_ALTA(bool alta);
	unsigned int GET_TIEMPO_ESPERA();
	void SET_TIEMPO_ESPERA(unsigned int tiempoEspera);
	bool GET_ESPERADO();
	void SET_ESPERADO(bool enEspera);
	cAsistencia GET_ASISTENCIA();
	void SET_ASISTENCIA(cAsistencia asist);
	eMotivo GET_MOTIVO();
	void SET_MOTIVO(eMotivo);
	float GET_RAD_ACUM();
	void SET_RAD_ACUM(float);
	void SET_ALCANZO_MAX(bool);
};

