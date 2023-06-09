#include "cFicha.h"

cFicha::cFicha(bool miAlta, bool miListaEspera, float miRadiacion, cOncologo miOncologo, float miDosisPorSesion, bool miAlcanzoMax, time_t miFechaIngreso, cPaciente miPaciente)
{
	this->aAlta = miAlta;
	this->aListaEspera = miListaEspera;
	this->aRadiacionAcum = miRadiacion;
	this->aOncologoCargo = miOncologo;
	this->aDosisXSesion = miDosisPorSesion;
	this->aAlcanzoMax = miAlcanzoMax;
	this->aFechaIngreso = miFechaIngreso;
	this->aPaciente = miPaciente;
}
cFicha::~cFicha()
{

}
