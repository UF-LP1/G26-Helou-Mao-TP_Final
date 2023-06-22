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

void cDosimetrista::calcularDosisTotal(cFicha* ficha)	//pedir ayuda valen
{
	cPaciente* pac = ficha->GET_PAC();
	cTumor* tumorcito;
	cTratamiento *terapia = nullptr;
	bool dosisMin = false;
	for (int i=0; i<pac->GET_TUMORES().size(); i++)
	{
		tumorcito = pac->GET_TUMORES()[i];
		terapia = tumorcito->GET_TRATAMIENTO();
		if (dynamic_cast<cRadioterapia*>(terapia) != nullptr || dynamic_cast<cSistemica*>(terapia) != nullptr)
		{
			tumorcito->SET_DOSIS_MAX(60);
			dosisMin = true;
		}
		else
			tumorcito->SET_DOSIS_MAX(150);
	}
	if (dosisMin)
	{
		ficha->SET_DOSIS_MAX(100);
	}
	else
		ficha->SET_DOSIS_MAX(180);
	ficha->SET_PACIENTE(pac);
	
}
void cDosimetrista::asignarTratamiento(cFicha* ficha)
{
	cTumor* tumor = nullptr;
	cPaciente* pac = ficha->GET_PAC();
	cTratamiento * trata= nullptr;
	cListaTumores tumores;
	for (int i=0; i< ficha->GET_PAC()->GET_TUMORES().size(); i++)
	{
		tumor = ficha->GET_PAC()->GET_TUMORES()[i];
		if ((tumor)->GET_TIPO_CANCER() == cabezayCuello || (tumor)->GET_TIPO_CANCER() == cuelloUtero || (tumor)->GET_TIPO_CANCER() == mama || (tumor)->GET_TIPO_CANCER() == ojo)
		{
			
			 trata = new cBraquiterapia;
			(ficha->GET_PAC()->GET_TUMORES()[i])->SET_TRATAMIENTO(trata);
		}
		else if ((tumor)->GET_TIPO_CANCER() == tiroides || (tumor)->GET_TIPO_CANCER() == prostatanariz)
		{
			
			 trata = new cSistemica;
			(ficha->GET_PAC()->GET_TUMORES()[i])->SET_TRATAMIENTO(trata);
		}
		else
		{
			
			 trata = new cRadioterapia;
			(ficha->GET_PAC()->GET_TUMORES()[i])->SET_TRATAMIENTO(trata);
		}
		//(tumores)+tumor;
			//borro it viejo
	}	
	//pac->SET_TUMORES(tumores);	//le paso al paciente el listado de tumores con el tratamiento setteado
	//ficha->SET_PACIENTE(pac);	//le paso a la ficha el paciente modificado
	return;
}
void cDosimetrista::atenderPaciente(cFicha* ficha)
{
		asignarTratamiento(ficha);
		calcularDosisTotal(ficha);
}



