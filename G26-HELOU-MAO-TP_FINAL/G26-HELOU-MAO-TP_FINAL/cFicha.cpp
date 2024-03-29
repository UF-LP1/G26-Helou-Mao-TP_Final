#include "cFicha.h"

cFicha::cFicha(bool miAlta, bool miListaEspera, float miRadiacion, int oncologo, int dosimetrista,float  miDosisMax,
	 bool miAlcanzoMax,  cPaciente* miPaciente, time_t asist, eMotivo motivo)
{
	this->aID_Dosimetrista = dosimetrista;
	this->aID_OncologoCargo = oncologo;
	this->aDosisMax = miDosisMax;
	this->aAlta = miAlta;
	this->aListaEspera = miListaEspera;
	this->aRadiacionAcum = miRadiacion;
	this->aAlcanzoMax = miAlcanzoMax;
	this->aPaciente = miPaciente;
	this->aTiempoEspera = 0;
	this->aAsistencia = asist;
	this->aMotivo = motivo;
}
cFicha::cFicha(cPaciente* paciente, int oncologo, int dosimetrista, eMotivo motivo)
{
	this->aID_Dosimetrista = dosimetrista;
	this->aID_OncologoCargo = oncologo;
	this->aDosisMax = 0;
	this->aAlta = false;
	this->aListaEspera = 0;
	this->aRadiacionAcum = 0;
	this->aAlcanzoMax = false;
	this->aPaciente=paciente;
	this->aTiempoEspera = 0;
	time_t ahora;//creo varable
	time(&ahora);//la inicializo con el tiempo de ahora
	this->aAsistencia = ahora;
	this->aMotivo = motivo;
}
cFicha::cFicha(eMotivo motivo)
{
	this->aID_Dosimetrista = 0;
	this->aID_OncologoCargo = 0;
	this->aDosisMax = 0;
	this->aAlta = false;
	this->aListaEspera = 0;
	this->aRadiacionAcum = 0;
	this->aAlcanzoMax = false;
	this->aPaciente = nullptr;
	this->aTiempoEspera = 0;
	time_t ahora;//creo varable
	time(&ahora);//la inicializo con el tiempo de ahora
	this->aAsistencia = ahora;
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
	return  this->aPaciente;
}

string cFicha::to_string()
{
	stringstream ss;
	ss << aPaciente->to_string() << endl;
	return ss.str();
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
time_t cFicha::GET_ASISTENCIA()
{
	return this->aAsistencia;
}
void cFicha::SET_ASISTENCIA(time_t asist)
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

ostream& operator<<(ostream& out, cFicha& ficha)
{
	out << "FICHA: " << endl;
	out << *(ficha.aPaciente);
	if (ficha.aListaEspera)
		out << "Se encuentra en lista de espera" << endl;
	else if (ficha.aAlta)
		out << "El paciente fue dado de alta" << endl;
	else
		out << "El paciente continua en tratamiento" << endl;
	return out;
	
}

