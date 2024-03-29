#pragma once



#include "eMotivo.h"
#include "cListaTumores.h"
using namespace std;
class cPaciente {
private:
	cListaTumores aTumores;
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
	cPaciente(string, string, string, string, string, char, string, float, cListaTumores);
	bool operator==(cPaciente*pac);
	~cPaciente();
	cPaciente();
	void operator=(cPaciente* pac);
	void SET_TUMORES(cListaTumores tumores);
	cListaTumores GET_TUMORES();
	friend ostream& operator<<(ostream& out, cPaciente&pac);
	string to_string();
	string GET_NOMBRE();
	string GET_APELLIDO();

};

