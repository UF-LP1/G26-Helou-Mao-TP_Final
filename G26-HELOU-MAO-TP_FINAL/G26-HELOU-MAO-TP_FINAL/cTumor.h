#pragma once

#include "eTipoCancer.h"
#include "cTratamiento.h"
#include "eTamanio.h"

class cTumor {
private:
	eTipoCancer aTipoCancer;
	eTamanio aTamanio;
	cTratamiento *aTipoTratamiento;
	float aRadAcum;
	float aDosisMax;
	float aDosisSemanal;
	unsigned int aFrecuencia;
	unsigned int aSesionesRealizadas;
public:
	cTumor(eTipoCancer, eTamanio, cTratamiento*, float, float, float, unsigned int);
	cTumor();
	~cTumor();
	float calcularDosisSemanal();
	cTratamiento* GET_TRATAMIENTO();
	void SET_TRATAMIENTO(cTratamiento *tratamiento);
	void SET_TIPO_CANCER(eTipoCancer auxTipoCancer);
	void SET_TAMANIO(eTamanio tam);
	void SET_FRECUENCIA(unsigned int frec);
	void SET_RAD_ACUM(float radAcum);
	void SET_SESIONES_REALIZADAS(unsigned int sesiones);
	eTipoCancer SET_TIPO_CANCER();
	eTipoCancer GET_TIPO_CANCER();
};
