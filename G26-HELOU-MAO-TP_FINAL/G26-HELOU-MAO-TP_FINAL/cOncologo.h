#pragma once
#include "cMedico.h"
class cOncologo : public cMedico {
public:
	cOncologo(string, string, float);
	~cOncologo();
	cOncologo operator=(cOncologo& otro);
	void evaluarPac();
	void reevaluarTratamiento();
	void actualizarFicha();
	void asignarFrecSemanal();
	void asignarDosisXSesion();
	void darAlta();
	int asignarTiempoEspera();
};