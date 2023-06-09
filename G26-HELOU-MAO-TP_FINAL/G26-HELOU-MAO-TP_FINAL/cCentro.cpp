#include "cCentro.h"
#include "Header.h"
cCentro::cCentro(list<cFicha> misFichas, string miNombre, string miDireccion, list <cMedico> misMedicos)
{
	//this->aFichas = misFichas;
	this->aNombre = miNombre;
	this->aDireccion = miDireccion;
	this->aMedicos = misMedicos;
}
cCentro::~cCentro()
{

}
void cCentro::contactar() {

}
list <cPaciente > cCentro::buscar() {

}
void cCentro::imprimir()
{

}
cFicha cCentro::pasarFichaOncologo()
{

}