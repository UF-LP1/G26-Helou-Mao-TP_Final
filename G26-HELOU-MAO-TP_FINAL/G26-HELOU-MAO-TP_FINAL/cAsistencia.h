#pragma once
#include "cPaciente.h"
class cAsistencia {
private:
	time_t aUltTurno;
	bool aAsistencia;
public:
	cAsistencia(time_t, bool);
	~cAsistencia();
	time_t GET_TURNO();
	bool GET_ASISTENCIA();

};