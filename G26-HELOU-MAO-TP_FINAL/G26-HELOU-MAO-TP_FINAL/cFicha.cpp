#include "cFicha.h"

cFicha::cFicha(bool miAlta, bool miListaEspera, float miRadiacion, cOncologo miOncologo,
	float miDosisPorSesion, bool miAlcanzoMax, time_t miFechaIngreso, cPaciente miPaciente)
	: aOncologoCargo(miOncologo)
{
	this->aAlta = miAlta;
	this->aListaEspera = miListaEspera;
	this->aRadiacionAcum = miRadiacion;
	this->aDosisXSesion = miDosisPorSesion;
	this->aAlcanzoMax = miAlcanzoMax;
	this->aFechaIngreso = miFechaIngreso;
	this->aPaciente = miPaciente;
}
cFicha::~cFicha()
{

}
