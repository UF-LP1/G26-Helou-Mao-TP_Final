#include "cDosimetrista.h"

unsigned int cDosimetrista::cantDosimetrista = 0;
cDosimetrista::cDosimetrista(string miNombre, string miApellido)
	:cMedico(miNombre, miApellido)
{
	this->numDosimetrista = ++cantDosimetrista;
}
cDosimetrista::~cDosimetrista()
{

}
int cDosimetrista::GET_ID_DOS()
{
	return this->numDosimetrista;
}

void cDosimetrista::calcularDosisTotal(cFicha* ficha)	
{
	cListaTumores lista= ficha->GET_PAC()->GET_TUMORES();
	cTratamiento *terapia = nullptr;
	bool dosisMin = false;
	cSistemica* sist = new cSistemica;
	cBraquiterapia* braqui = new cBraquiterapia;
	cRadioterapia* radio = new cRadioterapia;
	cTratamiento* trata= nullptr;
	for (int i=0; i<ficha->GET_PAC()->GET_TUMORES().size(); i++)
	{
		 trata = (lista[i]->GET_TRATAMIENTO());

		if (dynamic_cast<cRadioterapia*>(trata) != nullptr || dynamic_cast<cSistemica*>(trata) != nullptr)
		{
			ficha->GET_PAC()->GET_TUMORES()[i]->SET_DOSIS_MAX(60);
			dosisMin = true;
		}
		else
			ficha->GET_PAC()->GET_TUMORES()[i]->SET_DOSIS_MAX(150);
		//list + tumorcito;
	}
	if (dosisMin)
	{
		ficha->SET_DOSIS_MAX(100);
	}
	else
		ficha->SET_DOSIS_MAX(180);
	delete braqui;
	delete sist;
	delete radio;
	return;
	
}
list<cTratamiento*> cDosimetrista::asignarTratamiento(cFicha* ficha)
{
	cTumor* tumor = nullptr;
	cPaciente* pac = ficha->GET_PAC();
	//cTratamiento * trata= nullptr;
	cSistemica* sist = new cSistemica(60);
	cBraquiterapia* braqui = new cBraquiterapia(150,paladio);
	cRadioterapia* radio = new cRadioterapia(60, fotones);
	list<cTratamiento*> tratamientos;
	for (int i=0; i< ficha->GET_PAC()->GET_TUMORES().size(); i++)
	{
		//trata = ficha->GET_PAC()->GET_TUMORES()[i]->GET_TRATAMIENTO();
		tumor = ficha->GET_PAC()->GET_TUMORES()[i];
		if ((tumor)->GET_TIPO_CANCER() == cabezayCuello || (tumor)->GET_TIPO_CANCER() == cuelloUtero || (tumor)->GET_TIPO_CANCER() == mama || (tumor)->GET_TIPO_CANCER() == ojo)
		{
			tratamientos.push_back(braqui);
		}
		else if ((tumor)->GET_TIPO_CANCER() == tiroides || (tumor)->GET_TIPO_CANCER() == prostatanariz)
		{
			tratamientos.push_back(sist);
		}
		else
		{	
			tratamientos.push_back(radio);
		}
	
	}
	return tratamientos;
	delete braqui;
	delete radio;
	delete sist;
}
void cDosimetrista::atenderPaciente(cFicha* ficha)
{
	list<cTratamiento*> trats=asignarTratamiento(ficha);
	list<cTratamiento*> ::iterator it = trats.begin();
	int i = 0;
	for (it; it != trats.end(); it++)
	{
		ficha->GET_PAC()->GET_TUMORES()[i]->SET_TRATAMIENTO(*it);
		i++;
	}
	calcularDosisTotal(ficha);
}

string cDosimetrista::to_string()
{
	stringstream ss;
	ss << "Nombre oncologo : " << this->aNombre << endl;
	ss << "Apellido oncologo: " << this->aApellido << endl;
	ss << "ID: " << this->aNroEmplpeado << endl;
	return ss.str();
}

ostream& operator<<(ostream& out, cDosimetrista& imprimir)
{
	out << imprimir.to_string();
	return out;
}