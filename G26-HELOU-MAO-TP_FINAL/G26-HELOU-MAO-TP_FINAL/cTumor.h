#pragma once

#include "eTipoCancer.h"
#include "cBraquiterapia.h"
#include "cRadioterapia.h"
#include "cSistemica.h"
#include "eTamanio.h"

class cTumor {
private:
	eTipoCancer aTipoCancer;
	eTamanio aTamanio;

	float aRadAcum;
	float aDosisMax;
	float aDosisXSesion;
	unsigned int aFrecuencia;
	unsigned int aSesionesRealizadas;
	cTratamiento* aTipoTratamiento;
public:
	
	cTumor(eTipoCancer, eTamanio, cTratamiento*, float, float, float, unsigned int, unsigned int=0);
	cTumor();
	~cTumor();
	friend class cOncologo;
	string to_string();
	friend class cDosimetrista;
	friend ostream& operator<<(ostream& out, cTumor& tumor);
	float calcularDosisSemanal();
	cTratamiento* GET_TRATAMIENTO();
	void SET_TRATAMIENTO(cTratamiento &tratamiento);
	void SET_TIPO_CANCER(eTipoCancer auxTipoCancer);
	void SET_TAMANIO(eTamanio tam);
	unsigned int GET_FRECUENCIA();
	void SET_FRECUENCIA(unsigned int frec);
	float GET_RAD_ACUM();
	void SET_RAD_ACUM(float radAcum);
	unsigned int GET_SESIONES_REALIZADAS();
	void SET_SESIONES_REALIZADAS(unsigned int sesiones);
	eTipoCancer SET_TIPO_CANCER();
	eTipoCancer GET_TIPO_CANCER();
	float GET_DOSIS_MAX();
	void SET_DOSIS_MAX(float);
	float GET_DOSISXSESION();
	void SET_DOSISXSESION(float);
	eTamanio GET_TAMANIO();
};
