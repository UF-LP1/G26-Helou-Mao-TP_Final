#include "cTumor.h"

cTumor::cTumor(eTipoCancer miCancer, eTamanio miTamanio, cTratamiento miTratamiento, float miRadAcum, float miDosisMax, float miDosisSemanal, float miFrec)
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
cTratamiento cTumor:: GET_TRATAMIENTO()
{
	return this->aTipoTratamiento;
}