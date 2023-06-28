#pragma once

#include "cMedico.h"
#include "cListaFichas.h"
#include "cOncologo.h"
#include "cDosimetrista.h"



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
	cCentro(string miNombre, string miDireccion, cListaFichas fichas, list <cMedico*> medicos);
	void atenderPaciente(cPaciente*);
	cListaFichas pacientesaContactar();
	cCentro(string miNombre, string miDireccion,  cListaFichas fichas);
	cOncologo* buscarOncologo(int id);
	void imprimir();
	void pasarFichaOncologo(cFicha*); 
	void pasarFichaDosimetrista(cFicha*);
	cFicha* buscarFicha(cPaciente*);
	cListaFichas GET_FICHAS();
	cListaPacientes buscarTerapiaTumor(eTipoCancer, eTratamiento);
	void agregarFicha(cFicha&);
	cFicha* crearFicha(cPaciente*);
	friend ostream& operator<<(ostream& out, const cCentro& centro);
	string to_string();
	void operator+(cMedico* medico);
	cListaPacientes buscar_cincoporciento_terminar();
	void imprimirPacientes();
	void contactar(cListaFichas f);

};
