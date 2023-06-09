#include "cTumor.h"

cTumor::cTumor(eTipoCancer miCancer, eTamanio miTamanio, cTratamiento miTratamiento, float miRadAcum, float miDosisMax, float miDosisSemanal, float miFrec)
{
	this->aTipoCancer = miCancer;
	this->aTamanio = miTamanio;
	this->aTipoTratamiento = miTratamiento;
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

}
cTratamiento cTumor:: GET_TRATAMIENTO()
{

}