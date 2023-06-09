#pragma once

#include "eTipoCancer.h"
#include "cTratamiento.h"
#include "eTamanio.h"
class cTumor {
private:
	eTipoCancer aTipoCancer;
	eTamanio aTamanio;
	cTratamiento aTipoTratamiento;
	float aRadAcum;
	float aDosisMax;
	float aDosisSemanal;
	float aFrecuencia;
public:
	cTumor(eTipoCancer, eTamanio, cTratamiento, float, float, float, float);
	cTumor();
	~cTumor();
	float calcularDosisSemanal();
	cTratamiento GET_TRATAMIENTO();
};