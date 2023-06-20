#include "cFicha.h"

cFicha::cFicha(bool miAlta, bool miListaEspera, float miRadiacion, int oncologo, int dosimetrista,float  miDosisMax,
	float miDosisPorSesion, bool miAlcanzoMax,  cPaciente miPaciente)
{
	this->aID_Dosimetrista = dosimetrista;
	this->aID_OncologoCargo = oncologo;
	this->aDosisMax = miDosisMax;
	this->aAlta = miAlta;
	this->aListaEspera = miListaEspera;
	this->aRadiacionAcum = miRadiacion;
	this->aDosisXSesion = miDosisPorSesion;
	this->aAlcanzoMax = miAlcanzoMax;
	this->aPaciente = miPaciente;
}
cFicha::cFicha(cPaciente paciente, int oncologo, int dosimetrista)
{
	this->aPaciente = paciente;
	this->aID_OncologoCargo = oncologo;
	this->aID_Dosimetrista = dosimetrista;
}
cFicha::cFicha()
{
	this->aID_OncologoCargo = 0;
	this->aDosisMax = 0;
	this->aAlta = false;
	this->aListaEspera = false;
	this->aRadiacionAcum = 0.0;
	this->aDosisXSesion = 0.0;
	this->aAlcanzoMax = false;
}
cFicha::~cFicha()
{

}
int cFicha::GET_ONC()
{
	return this->aID_OncologoCargo;
}
int cFicha::GET_DOS()
{
	return this->aID_Dosimetrista;
}
cPaciente* cFicha::GET_PAC()
{
	return  &aPaciente;
}

void cFicha::SET_PACIENTE(cPaciente* pac)
{
	this->aPaciente = pac;
}
void cFicha::SET_DOSIS_MAX(float dosisMax)
{
	this->aDosisMax = dosisMax;
}