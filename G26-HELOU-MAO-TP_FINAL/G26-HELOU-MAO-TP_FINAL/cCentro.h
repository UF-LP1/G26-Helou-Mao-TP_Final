#pragma once

#include "cMedico.h"
class cCentro {
private:
	list<cFicha> aFichas;
	string aNombre;
	string aDireccion;
	list <cMedico> aMedicos;
public:
	void contactar();
	list <cPaciente > buscar();
	void imprimir();
	cFicha pasarFichaOncologo;

};