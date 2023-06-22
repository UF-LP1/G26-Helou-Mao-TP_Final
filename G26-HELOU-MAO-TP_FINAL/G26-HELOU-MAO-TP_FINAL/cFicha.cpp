#include "cFicha.h"

cFicha::cFicha(bool miAlta, bool miListaEspera, float miRadiacion, int oncologo, int dosimetrista,float  miDosisMax,
	float miDosisPorSesion, bool miAlcanzoMax,  cPaciente* miPaciente, cAsistencia asist, eMotivo motivo)
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
	this->aTiempoEspera = 0;
	this->aAsistencia = asist;
	this->aMotivo = motivo;
}
cFicha::cFicha(cPaciente *paciente, int oncologo, int dosimetrista, eMotivo motivo)
{
	this->aPaciente = paciente;
	this->aID_OncologoCargo = oncologo;
	this->aID_Dosimetrista = dosimetrista;
	this->aMotivo = motivo;
}
cFicha::cFicha(eMotivo motivo)
{
	this->aTiempoEspera = 0;
	this->aID_OncologoCargo = 0;
	this->aID_Dosimetrista = 0;
	this->aDosisMax = 0;
	this->aAlta = false;
	this->aListaEspera = false;
	this->aRadiacionAcum = 0.0;
	this->aDosisXSesion = 0.0;
	this->aAlcanzoMax = false;
	this->aMotivo = motivo;
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
float cFicha::GET_DOSIS_MAX()
{
	return this->aDosisMax;
}
void cFicha::SET_DOSIS_MAX(float dosisMax)
{
	this->aDosisMax = dosisMax;
}
bool cFicha::GET_ALTA()
{
	return this->aAlta;
}
void cFicha::SET_ALTA(bool alta)
{
	this->aAlta = alta;
}
unsigned int cFicha::GET_TIEMPO_ESPERA()
{
	return this->aTiempoEspera;
}
void cFicha::SET_TIEMPO_ESPERA(unsigned int tiempoEspera)
{
	this->aTiempoEspera = tiempoEspera;

}
bool cFicha::GET_ESPERADO()
{
	return this->aListaEspera;
}
void cFicha::SET_ESPERADO(bool enEspera)
{
	this->aListaEspera = enEspera;
}
cAsistencia cFicha::GET_ASISTENCIA()
{
	return this->aAsistencia;
}
void cFicha::SET_ASISTENCIA(cAsistencia asist)
{
	this->aAsistencia = asist;
}

eMotivo cFicha::GET_MOTIVO()
{
	return this->aMotivo;
}

void cFicha::SET_MOTIVO(eMotivo motivo)
{
	this->aMotivo = motivo;
}

float cFicha::GET_RAD_ACUM()
{
	return this->aRadiacionAcum;
}

void cFicha::SET_RAD_ACUM(float radiacion)
{
	this->aRadiacionAcum = radiacion;
}

void cFicha::SET_ALCANZO_MAX(bool nuevo)
{
	this->aAlcanzoMax = nuevo;
}
