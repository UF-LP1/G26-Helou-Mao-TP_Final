#pragma once

#include "cMedico.h"
#include "cListaFichas.h"
#include "cOncologo.h"
#include "cDosimetrista.h"
#include <sstream>


//HAY QUE HACER LA FUNCION PARA IMPRIMIR TODOS LOS PACIENTES

class cCentro {
private:
	cListaFichas aFichas;
	string aNombre;
	string aDireccion;
	list <cMedico*> aMedicos;
public:
	cCentro( string aNombre, string aDireccion, list <cMedico*> aMedicos);
	cCentro(string miNombre, string miDireccion);
	~cCentro();
	void contactar();
	void atenderPaciente(cPaciente*);
	//list <cPaciente* > buscar();
	void imprimir();
	void pasarFichaOncologo(cFicha*); 
	void pasarFichaDosimetrista(cFicha*);
	cFicha* buscarFicha(cPaciente*);
	cListaPacientes buscarTerapiaTumor(eTipoCancer, eTratamiento);
	void agregarFicha(cFicha*);
	cFicha* crearFicha(cPaciente*);
	friend ostream& operator<<(ostream& out, const cCentro& centro);
	string to_string();
	void operator+(cMedico* medico);
	cListaPacientes buscar_cincoporciento_terminar(eTipoCancer);
	void imprimirPacientes();
};