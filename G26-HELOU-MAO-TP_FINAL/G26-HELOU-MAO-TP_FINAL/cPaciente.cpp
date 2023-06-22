#include "cPaciente.h"

cPaciente::cPaciente( string miNombre, string miApellido, string miDni, string miContacto, string miFechaNac, char miSexo, string miTipoSangre, float miSaludGral)
{

	this->aNombre = miNombre;
	this->aApellido = miApellido;
	this->aDNI = miDni;
	this->aContacto = miContacto;
	this->aFechaNac = miFechaNac;
	this->aSexo = miSexo;
	this->aTipoSangre = miTipoSangre;
	this->aSaludGral = miSaludGral;
}
cPaciente::~cPaciente()
{

}
bool cPaciente ::operator==(cPaciente& pac)
{
	bool retorno = false;
	if (this->aDNI == pac.aDNI)
	{
		retorno = true;
	}
	return retorno;
}

cPaciente::cPaciente()
{
	this->aNombre = "";
	this->aApellido = "";
	this->aDNI = "";
	this->aContacto = "";
	this->aFechaNac = "";
	this->aSexo = ' ';
	this->aTipoSangre = "";
	this->aSaludGral = 0.0;
}

void cPaciente::operator=(cPaciente* pac)
{
	this->aApellido = pac->aApellido;
	this->aContacto = pac->aContacto;
	this->aDNI = pac->aDNI;
	this->aFechaNac = pac->aFechaNac;
	this->aNombre = pac->aNombre;
	this->aSaludGral = pac->aSaludGral;
	this->aSexo = pac->aSexo;
	this->aTipoSangre = pac->aTipoSangre;
	this->aTumores = pac->aTumores;
	return;
}

void cPaciente::SET_TUMORES(cListaTumores tumores)
{
	this->aTumores = tumores;
}

cListaTumores cPaciente::GET_TUMORES()
{
	return aTumores;
}



ostream& operator<<(ostream& out, cPaciente& pac)
{
	out << "Nombre: " << pac.aNombre << endl << "Apellido: " << pac.aApellido << endl;
	for (int i=0; i < pac.aTumores.size(); i++)
	{
		out << "Zona cancer: " << pac.aTumores[i]->GET_TIPO_CANCER() << endl;
	}
	return out;
}
