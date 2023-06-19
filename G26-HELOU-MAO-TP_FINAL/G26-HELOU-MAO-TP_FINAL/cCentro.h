#pragma once

#include "cMedico.h"
#include "cFicha.h"
class cCentro {
private:
	list<cFicha*> aFichas;
	string aNombre;
	string aDireccion;
	list <cMedico*> aMedicos;
public:
	cCentro( string aNombre, string aDireccion, list <cMedico*> aMedicos);
	~cCentro();
	void contactar();
	void atenderPaciente(cPaciente*);
	list <cPaciente* > buscar();
	void imprimir();
	cFicha* pasarFichaMedico(); //no se si es necesaria, al oncologo lo podemos buscar en la ficha
	cFicha* buscarFicha(cPaciente*);
	void agregarFicha(cFicha*);
	void crearFicha(cPaciente*);
};