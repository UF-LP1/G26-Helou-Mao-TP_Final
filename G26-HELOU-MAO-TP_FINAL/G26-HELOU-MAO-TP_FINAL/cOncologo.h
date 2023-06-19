#pragma once
#include "cMedico.h"
class cOncologo : public cMedico {
	 int numeroOncologo;
public:
	static int cantOncologos;
	cOncologo(string, string);
	~cOncologo();
	void evaluarPac(cFicha*);
	void reevaluarTratamiento(cFicha*);
	void actualizarFicha(cFicha*);
	void asignarFrecSemanal(cFicha*);
	void asignarDosisXSesion(cFicha*);
	void darAlta(cFicha*);
	int asignarTiempoEspera(cFicha*);
	void atenderPaciente(cFicha*);
	void diagnosticarTumores(cFicha*);

};