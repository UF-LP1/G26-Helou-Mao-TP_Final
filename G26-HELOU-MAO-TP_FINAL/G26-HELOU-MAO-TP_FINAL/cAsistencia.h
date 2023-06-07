#pragma once
#include "cPaciente.h"
class cAsistencia {
private:
	time_t aUltAsist;
	bool aAsistencia;
public:
	time_t GET_TURNO();
};