#include "cCentro.h"
#include "Header.h"
cCentro::cCentro( string miNombre, string miDireccion, list <cMedico*> misMedicos)
{
	//this->aFichas = misFichas;
	this->aNombre = miNombre;
	this->aDireccion = miDireccion;
	list <cMedico*>  ::iterator it = misMedicos.begin();
	for (it; it != misMedicos.end(); it++)
	{
		aMedicos.push_back(*it);
	}
	
}
cCentro::~cCentro()
{

}
void cCentro::contactar() {

}
void cCentro::atenderPaciente(cPaciente* paciente)
{
}

list<cPaciente*> cCentro::buscar()
{
	return list<cPaciente*>();
}

void cCentro::imprimir()
{

}
cFicha* cCentro::pasarFichaMedico()
{
	return nullptr;
}
cFicha* cCentro::buscarFicha(cPaciente* paciente)
{
	return nullptr;
}
void cCentro::agregarFicha(cFicha* ficha)
{
}
void cCentro::crearFicha(cPaciente* paciente)
{
}
