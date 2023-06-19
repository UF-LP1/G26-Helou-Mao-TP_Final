#pragma once

#include "cMedico.h"
#include "cListaFichas.h"
#include "cOncologo.h"
#include "cDosimetrista.h"

class cCentro {
private:
	cListaFichas aFichas;
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
	void pasarFichaOncologo(cFicha*); 
	void pasarFichaDosimetrista(cFicha*);
	cFicha* buscarFicha(cPaciente*);
	void agregarFicha(cFicha*);
	cFicha* crearFicha(cPaciente*);
};