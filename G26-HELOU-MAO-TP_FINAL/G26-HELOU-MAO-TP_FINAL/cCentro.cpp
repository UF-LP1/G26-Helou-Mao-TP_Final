#include "cCentro.h"
#include "Header.h"
cCentro::cCentro( string miNombre, string miDireccion, list <cMedico*> misMedicos)
{
	this->aNombre = miNombre;
	this->aDireccion = miDireccion;
	list <cMedico*>  ::iterator it = misMedicos.begin();
	for (it; it != misMedicos.end(); it++)
	{
		aMedicos.push_back(*it);
	}
	
}
cCentro::~cCentro()
{

}
void cCentro::contactar() {

}
void cCentro::atenderPaciente(cPaciente* paciente)
{
	cFicha* busqueda = new cFicha;//creo variable para guardar
	busqueda = buscarFicha(paciente);//busco paciente en mi lista de fichas
	if (busqueda == nullptr)//el paciente aun no tiene ficha
	{
		busqueda = crearFicha(paciente);//creo una ficha para el paciente
		
	}
	else
	{

	}
		
}

list<cPaciente*> cCentro::buscar()
{
	return list<cPaciente*>();
}

void cCentro::imprimir()
{

}
void cCentro::pasarFichaOncologo(cFicha* ficha)
{

	for (cMedico* med : this->aMedicos)
	{
		cOncologo* oncologo = dynamic_cast<cOncologo*>(med);//busco en mi lista de medicos a los oncologos
		if (med != nullptr && med->GET_ID() == ficha->GET_ONC())
		{
			med->atenderPaciente(ficha);//el paciente lo va a antender su oncologo
		}
	}
	return ;
}
void cCentro::pasarFichaDosimetrista(cFicha* ficha)
{

	for (cMedico* med : this->aMedicos)
	{
		cDosimetrista* dosimetrista = dynamic_cast<cDosimetrista*>(med);//busco en mi lista de medicos al dosimetrista
		if (med != nullptr && med->GET_ID() == ficha->GET_DOS())
		{
			med->atenderPaciente(ficha);//el paciente lo va a atender su dosimetrista
		}
	}
	return;
}
cFicha* cCentro::buscarFicha(cPaciente* paciente)
{
	cFicha* retorno = new cFicha;
	retorno=aFichas[paciente];//busco en mi lista de fichas a mi paciente
	return retorno;
}
void cCentro::agregarFicha(cFicha* ficha)
{
	aFichas + ficha;//agrego mi nueva ficha con la sobrecarga de loista de fichas
	return;
}
cFicha* cCentro::crearFicha(cPaciente* paciente)
{
	srand(time(NULL));
	
	int totalOncologos = cOncologo::cantOncologos;
	int totalDosimetristas = cDosimetrista::cantDosimetrista;
	int numDosimetrista = rand() % totalDosimetristas + 1;
	int numOncologo = rand() % totalOncologos + 1;
	cFicha* nuevaFicha = new cFicha(*paciente, numOncologo, numDosimetrista);//con randoms le asigne un oncologo y un dosimetrista
	agregarFicha(nuevaFicha);//agrego la fica a mi lista
	return nuevaFicha;
}
