#pragma once


#include "cTumor.h"
#include "Header.h"
using namespace std;
class cPaciente {
private:
	list <cTumor> aTumores;
	string aNombre;
	string aApellido;
	string aDNI;
	string aContacto;
	time_t aFechaNac;
	char aSexo;
	string aTipoSangre;
	float aSaludGral;
public:
	cPaciente(list<cTumor>, string, string, string, string, time_t, char, string, float);
	~cPaciente();
};