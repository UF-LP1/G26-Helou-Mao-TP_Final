#pragma once
#include "cMedico.h"
class cOncologo : public cMedico {
	 int numeroOncologo;
public:
	static unsigned int cantOncologos;
	cOncologo(string, string);
	~cOncologo();
	void evaluarPac(cFicha*);
	void reevaluarPaciente(cFicha*);
	int GET_ID_ONC();
	//void asignarFrecSemanal(cFicha*);
	void asignarDosisXSesion(cFicha*);
	void darAlta(cFicha*);
	void asignarTiempoEspera(cFicha*);
	void atenderPaciente(cFicha*);
	void diagnosticarTumores(cFicha*);

};