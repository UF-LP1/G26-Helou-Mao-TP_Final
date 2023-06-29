#include "cTumor.h"

cTumor::cTumor(eTipoCancer miCancer, eTamanio miTamanio,  float miRadAcum, float miDosisMax, float miDosisXsesion, unsigned int miFrec, cTratamiento* miTratamiento, unsigned int sesiones)
{
	this->aTipoTratamiento = miTratamiento;
	this->aSesionesRealizadas = 0;
	this->aTipoCancer = miCancer;
	this->aTamanio = miTamanio;
	this->aRadAcum = miRadAcum;
	this->aDosisMax = miDosisMax;
	this->aDosisXSesion = miDosisXsesion;
	this->aFrecuencia = miFrec;
	this->aSesionesRealizadas = sesiones;
}

cTumor::~cTumor()
{

}
string cTumor::to_string()
{

	stringstream ss;

	//determino que imprimir de acuerdo al enum
	ss << "Tipo cancer: ";
	if (aTipoCancer == cabezayCuello)
		ss << "Cabeza y cuello" << endl;
	else if(aTipoCancer == cuelloUtero)
		ss << "Cuello del Utero" << endl;
	else if (aTipoCancer == mama)
		ss << "Mama" << endl;
	else if (aTipoCancer == ojo)
		ss << "Ojo" << endl;
	else if (aTipoCancer == tiroides)
		ss << "Tiroides" << endl;
	else if (aTipoCancer == prostata)
		ss << "Prostata" << endl;
	else if (aTipoCancer == nariz)
		ss << "Nariz" << endl;
	else if (aTipoCancer == pulmon)
		ss << "Pulmon" << endl;
	else if (aTipoCancer == higado)
		ss << "Higado" << endl;
	else if (aTipoCancer == riñon)
		ss << "Riñon" << endl;
	else if (aTipoCancer == vejiga)
		ss << "Vejiga" << endl;
	else 
		ss << "Pancreas" << endl;

	//determino que imprimir de acuerdo al enum
	ss << "Tamanio: ";
	if (aTamanio == pequenio)
		ss << "Pequenio" << endl;
	else if (aTamanio == mediano)
		ss << "Mediano" << endl;
	else
		ss << "Grande" << endl;

	return ss.str();
}

cTratamiento* cTumor:: GET_TRATAMIENTO()
{
	if (this->aTipoTratamiento == nullptr)
		throw new exception("Tratamiento nulo");
	return (this->aTipoTratamiento);
}

cTumor::cTumor()
{
	this->aTipoTratamiento = nullptr;
	this->aDosisMax = 0.0;
	this->aDosisXSesion = 0.0;
	this->aFrecuencia = 0;
	this->aRadAcum = 0.0;
	this->aSesionesRealizadas = 0;
	this->aTamanio = pequenio;
	this->aTipoCancer = cabezayCuello;

}
void cTumor::SET_TRATAMIENTO(cTratamiento *tratamiento)
{
	this->aTipoTratamiento = tratamiento;
}
void cTumor::SET_TIPO_CANCER(eTipoCancer auxTipoCancer)
{
	this->aTipoCancer = auxTipoCancer;
}
void cTumor::SET_TAMANIO(eTamanio tam)
{
	this->aTamanio = tam;
}

unsigned int cTumor::GET_FRECUENCIA()
{
	return this->aFrecuencia;
}

void cTumor::SET_FRECUENCIA(unsigned int frec)
{
	this->aFrecuencia = frec;
}
float cTumor::GET_RAD_ACUM()
{
	return this->aRadAcum;
}
void cTumor::SET_RAD_ACUM(float radAcum)
{
	this->aRadAcum = radAcum;
}
unsigned int cTumor::GET_SESIONES_REALIZADAS()
{
	return this->aSesionesRealizadas;
}
void cTumor::SET_SESIONES_REALIZADAS(unsigned int sesiones)
{
	this->aSesionesRealizadas = sesiones;
}

eTipoCancer cTumor::GET_TIPO_CANCER()
{
	return this->aTipoCancer;
}

float cTumor::GET_DOSIS_MAX()
{
	return this->aDosisMax;
}

void cTumor::SET_DOSIS_MAX(float dosis)
{
	this->aDosisMax = dosis;
}

float cTumor::GET_DOSISXSESION()
{
	return this->aDosisXSesion;
}

void cTumor::SET_DOSISXSESION(float dosis)
{
	this->aDosisXSesion = dosis;
}

eTamanio cTumor::GET_TAMANIO()
{
	return this->aTamanio;
}

ostream& operator<<(ostream& out, cTumor& tumor)
{
	out << tumor.to_string();
	if (dynamic_cast<cBraquiterapia*>(tumor.aTipoTratamiento) != nullptr)
		out << "El tipo de tratamiento es braquiterapia" << endl;
	else if(dynamic_cast<cSistemica*>(tumor.aTipoTratamiento) != nullptr)
		out << "El tipo de tratamiento es sistemica" << endl;
	else if(dynamic_cast<cRadioterapia*>(tumor.aTipoTratamiento) != nullptr)
		out << "El tipo de tratamiento es radioterapia" << endl;
	return out;
}
