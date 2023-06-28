#pragma once

#include "cListaPacientes.h"

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
	cPaciente *aPaciente;
	unsigned int aTiempoEspera;
	time_t aAsistencia;
	eMotivo aMotivo;
public:
	cFicha(bool, bool, float, int, int ,float, float, bool, cPaciente*, time_t, eMotivo motivo=diagnostico);
	cFicha(cPaciente* paciente, int oncologo, int dosimetrista, eMotivo motivo = diagnostico);
	cFicha(eMotivo motivo = diagnostico);
	~cFicha();
	friend class cCentro;
	int GET_ONC();
	int GET_DOS();
	cPaciente* GET_PAC();
	friend ostream& operator<<(ostream& out, cFicha& ficha);
	string to_string();
	void SET_PACIENTE(cPaciente* pac);
	float GET_DOSIS_MAX();
	void SET_DOSIS_MAX(float dosisMax);
	bool GET_ALTA();
	void SET_ALTA(bool alta);
	unsigned int GET_TIEMPO_ESPERA();
	void SET_TIEMPO_ESPERA(unsigned int tiempoEspera);
	bool GET_ESPERADO();
	void SET_ESPERADO(bool enEspera);
	time_t GET_ASISTENCIA();
	void SET_ASISTENCIA(time_t asist);
	eMotivo GET_MOTIVO();
	void SET_MOTIVO(eMotivo);
	float GET_RAD_ACUM();
	void SET_RAD_ACUM(float);
	void SET_ALCANZO_MAX(bool);
};

