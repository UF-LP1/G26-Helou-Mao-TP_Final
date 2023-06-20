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
void cDosimetrista::calcularDosisTotal(cFicha* ficha)	//pedir ayuda valen
{
	cPaciente* pac = ficha->GET_PAC();
	list<cTumor*> *tumores = pac->GET_TUMORES();
	cTratamiento *terapia = nullptr;
	bool dosisMin = false;
	for (cTumor* it : *tumores)
	{
		terapia = it->GET_TRATAMIENTO();
		if (dynamic_cast<cRadioterapia*>(terapia) != nullptr || dynamic_cast<cSistemica*>(terapia) != nullptr)
		{
			it->SET_DOSIS_MAX(60);
			dosisMin = true;
		}
		else
			it->SET_DOSIS_MAX(150);
	}
	if (dosisMin)
	{
		ficha->SET_DOSIS_MAX(100);
	}
	else
		ficha->SET_DOSIS_MAX(180);
	
}
void cDosimetrista::asignarTratamiento(cFicha* ficha)
{
	list <cTumor*> *tumores = ficha->GET_PAC()-> GET_TUMORES();
	cPaciente* pac = ficha->GET_PAC();
	cTratamiento * trata= nullptr;
	for (cTumor* it : *tumores)
	{
		if (it->GET_TIPO_CANCER() == 0 || it->GET_TIPO_CANCER() == 1 || it->GET_TIPO_CANCER() == 2 || it->GET_TIPO_CANCER() == 3)
		{
			cBraquiterapia braqui;
			trata = &braqui;
			it->SET_TRATAMIENTO(trata);
		}
		else if (it->GET_TIPO_CANCER() == 4 || it->GET_TIPO_CANCER() == 5)
		{
			cSistemica sist;
			trata = &sist;
			it->SET_TRATAMIENTO(trata);
		}
		else
		{
			cRadioterapia radio;
			trata = &radio;
			it->SET_TRATAMIENTO(trata);
		}
		tumores->push_back(it); //le agrego it modificado
		tumores->pop_front();	//borro it viejo
	}	
	pac->SET_TUMORES(*tumores);	//le paso al paciente el listado de tumores con el trtamiento setteado
	ficha->SET_PACIENTE(pac);	//le paso a la ficha el paciente modificado
	return;
}
void cDosimetrista::atenderPaciente(cFicha* ficha)
{
		asignarTratamiento(ficha);
		calcularDosisTotal(ficha);
}



