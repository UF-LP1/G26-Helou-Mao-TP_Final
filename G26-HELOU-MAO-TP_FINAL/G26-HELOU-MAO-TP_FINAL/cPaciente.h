#pragma once

#include <list>
#include <string>
#include <ctime>
#include "iostream"
#include "cTumor.h"
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
};