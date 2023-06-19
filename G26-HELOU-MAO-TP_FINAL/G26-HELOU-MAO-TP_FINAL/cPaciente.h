#pragma once


#include "cTumor.h"

using namespace std;
class cPaciente {
private:
	list <cTumor*> aTumores;
	string aNombre;
	string aApellido;
	string aDNI;
	string aContacto;
	string aFechaNac;
	char aSexo;
	string aTipoSangre;
	float aSaludGral;
public:
	cPaciente(string, string, string, string, string, char, string, float);
	bool operator==(cPaciente&pac);
	~cPaciente();
	cPaciente();
};