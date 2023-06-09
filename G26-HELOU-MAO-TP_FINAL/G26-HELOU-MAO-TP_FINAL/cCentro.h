#pragma once

#include "cMedico.h"
#include "cFicha.h"
class cCentro {
private:
	list<cFicha> aFichas;
	string aNombre;
	string aDireccion;
	list <cMedico> aMedicos;
public:
	cCentro(list<cFicha> aFichas, string aNombre, string aDireccion, list <cMedico> aMedicos);
	~cCentro();
	void contactar();
	list <cPaciente > buscar();
	void imprimir();
	cFicha pasarFichaOncologo();

};