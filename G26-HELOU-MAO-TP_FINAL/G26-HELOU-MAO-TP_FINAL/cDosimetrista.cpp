#include "cDosimetrista.h"

int cDosimetrista::cantDosimetrista = 0;
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
		 trata = lista[i]->GET_TRATAMIENTO();

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
	delete braqui;
	return;
	
}
void cDosimetrista::asignarTratamiento(cFicha* ficha)
{
	cTumor* tumor = nullptr;
	cPaciente* pac = ficha->GET_PAC();
	//cTratamiento * trata= nullptr;
	cSistemica* sist = new cSistemica;
	cBraquiterapia* braqui = new cBraquiterapia;
	cRadioterapia* radio = new cRadioterapia;
	for (int i=0; i< ficha->GET_PAC()->GET_TUMORES().size(); i++)
	{
		//trata = ficha->GET_PAC()->GET_TUMORES()[i]->GET_TRATAMIENTO();
		tumor = ficha->GET_PAC()->GET_TUMORES()[i];
		if ((tumor)->GET_TIPO_CANCER() == cabezayCuello || (tumor)->GET_TIPO_CANCER() == cuelloUtero || (tumor)->GET_TIPO_CANCER() == mama || (tumor)->GET_TIPO_CANCER() == ojo)
		{
			(ficha->GET_PAC()->GET_TUMORES()[i])->SET_TRATAMIENTO(braqui);	//settea el tratamiento en el tumor
			ficha->SET_DOSIS_MAX(150);	//setteodosis maxima por paciente
			
		}
		else if ((tumor)->GET_TIPO_CANCER() == tiroides || (tumor)->GET_TIPO_CANCER() == prostatanariz)
		{
			(ficha->GET_PAC()->GET_TUMORES()[i])->SET_TRATAMIENTO(sist);	
			ficha->SET_DOSIS_MAX(60);
		}
		else
		{	
			(ficha->GET_PAC()->GET_TUMORES()[i])->SET_TRATAMIENTO(radio);
			ficha->SET_DOSIS_MAX(60);
		}
	
	}
	delete radio;
	delete sist;
	delete braqui;
	return;
}
void cDosimetrista::atenderPaciente(cFicha* ficha)
{
		asignarTratamiento(ficha);
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