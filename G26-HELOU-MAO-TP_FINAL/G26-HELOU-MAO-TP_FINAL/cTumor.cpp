#include "cTumor.h"

cTumor::cTumor(eTipoCancer miCancer, eTamanio miTamanio, cTratamiento* miTratamiento, float miRadAcum, float miDosisMax, float miDosisSemanal, unsigned int miFrec)
	:aTipoTratamiento(miTratamiento)
{
	this->aSesionesRealizadas = 0;
	this->aTipoCancer = miCancer;
	this->aTamanio = miTamanio;
	this->aRadAcum = miRadAcum;
	this->aDosisMax = miDosisMax;
	this->aDosisSemanal = miDosisSemanal;
	this->aFrecuencia = miFrec;
}

cTumor::~cTumor()
{

}
float cTumor:: calcularDosisSemanal()
{

	return 0.0;
}
cTratamiento* cTumor:: GET_TRATAMIENTO()
{
	return this->aTipoTratamiento;
}
cTumor::cTumor()
{
	this->aDosisMax = 0.0;
	this->aDosisSemanal = 0.0;
	this->aFrecuencia = 0;
	this->aRadAcum = 0.0;
	this->aSesionesRealizadas = 0;
	this->aTamanio = pequenio;
	this->aTipoCancer = cabezayCuello;

}
void cTumor::SET_TRATAMIENTO(cTratamiento* tratamiento)
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

void cTumor::SET_FRECUENCIA(unsigned int frec)
{
	this->aFrecuencia = frec;
}
void cTumor::SET_RAD_ACUM(float radAcum)
{
	this->aRadAcum = radAcum;
}
void cTumor::SET_SESIONES_REALIZADAS(unsigned int sesiones)
{
	this->aSesionesRealizadas = sesiones;
}
eTipoCancer cTumor::SET_TIPO_CANCER()
{
	return this->aTipoCancer;
}
eTipoCancer cTumor::GET_TIPO_CANCER()
{
	return this->aTipoCancer;
}
