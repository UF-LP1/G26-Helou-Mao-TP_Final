#include "cOncologo.h"

unsigned int cOncologo::cantOncologos = 0;
cOncologo::cOncologo(string miNombre, string miApellido) 
:cMedico(miNombre, miApellido) 
{
	this->numeroOncologo = ++cantOncologos;
}
cOncologo::~cOncologo() {

}


void cOncologo::evaluarPac(cFicha* ficha)
{
	list<cTumor*>* auxTumores = ficha->GET_PAC()->GET_TUMORES();
	srand(time(NULL));
	int Alta = rand() % 10;
	if (Alta <3)
	{
		for (cTumor* tumor : *auxTumores)
		{
			tumor->SET_TAMANIO(noEsta);
		}
		darAlta(ficha);
	}
	else {
	
		int tumorCambiar = rand() % (auxTumores->size());
		int tamanioNuevo = rand() % 4;
		int contVueltas = 0;

		for (cTumor* tumor : *auxTumores)
		{
			//aca se va a modificar los tumores
			if (contVueltas == tumorCambiar)
			{
				tumor->SET_TAMANIO(eTamanio(tamanioNuevo));
			}

		}
	}
}
void cOncologo::reevaluarPaciente(cFicha* ficha)
{
	ficha->SET_RAD_ACUM(0);
}


//void cOncologo::asignarFrecSemanal(cFicha*) {
//
//} está hecho en diagnosticar tumores

void cOncologo::asignarDosisXSesion(cFicha* ficha) {

	list<cTumor*>* auxTumores = ficha->GET_PAC()->GET_TUMORES();
	for (cTumor* tumorcito : *auxTumores)
	{
		tumorcito->GET_TRATAMIENTO()->DOSIS_X_TUMOR();
		tumorcito->SET_DOSISXSESION(tumorcito->GET_TRATAMIENTO()->GET_DOSISXSESION());
	}

}
void cOncologo::darAlta(cFicha* ficha) {
	if (ficha->GET_PAC()->GET_TUMORES()->size() == 0)
		ficha->SET_ALTA(true);
}
void cOncologo::asignarTiempoEspera(cFicha* ficha) {
	srand(time(NULL));
	unsigned int tiempoEspera = rand() % 4 + 1; //tiempo de espera es la cantidad de meses que va a tener que esperar para volver a irradiarse. Como minimo tendra que esperar un mes y como maximo 4
	ficha->SET_TIEMPO_ESPERA(tiempoEspera);
	ficha->SET_ESPERADO(true);
}

void cOncologo::atenderPaciente(cFicha* ficha)
{
	if (ficha->GET_MOTIVO() == diagnostico)
	{
		if (ficha->GET_PAC()->GET_TUMORES() == nullptr)
			diagnosticarTumores(ficha);
		else
		{
			asignarDosisXSesion(ficha);
		}

	}
	else if (ficha->GET_MOTIVO() == evaluacion)
	{
		evaluarPac(ficha);//aca se va a chequear el estado de los tumores (se los va a achicar o agrandar aca tambien
	}
	else if (ficha->GET_MOTIVO() == finTratamiento)
	{
		int cont = 0;
		list<cTumor*>* tumores = ficha->GET_PAC()->GET_TUMORES();
		for (cTumor* tumorcito : *tumores)
		{
			if (tumorcito->GET_TAMANIO() != noEsta)
				cont++;
		}
		if (cont == 0)
			darAlta(ficha);
		else
			asignarTiempoEspera(ficha);
	}
	else
	{
		reevaluarPaciente(ficha);
	}
}

void cOncologo::diagnosticarTumores(cFicha* ficha)
{
	srand(time(NULL));
	unsigned int cantTumores = rand() % 10 + 1;
	unsigned int auxTamanio = 0;
	unsigned int auxTipoCancer = 0;
	unsigned int frecuencia = 0;
	cPaciente* pac=ficha->GET_PAC();
	list<cTumor*> tumoresAux;
	cTumor *tumor=new cTumor(); 
	for (int i = 0; i < cantTumores; i++)
	{
		auxTipoCancer = rand() % 11;
		tumor->SET_TIPO_CANCER(eTipoCancer(auxTipoCancer));
		auxTamanio = rand() % 3+1;
		tumor->SET_TAMANIO(eTamanio(auxTamanio));
		frecuencia = rand() % 6;
		tumor->SET_FRECUENCIA(frecuencia);

		tumoresAux.push_back(tumor);
	}
	pac->SET_TUMORES(tumoresAux);
	delete tumor;
	ficha->SET_PACIENTE(pac);
	return;
}
