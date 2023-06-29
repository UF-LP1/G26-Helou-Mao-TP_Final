#pragma once
#include "funciones.h"

int main()
{
	//creamo pacientes y fichas
	cListaPacientes pacientesAux = crearPacs();
	cListaFichas fichasAux = crarFichas();

	//creamos medicos
	list <cMedico*> medicos = crearMedicos();
	cCentro miCentro("Mater Dei", "Salguero y Libertador", fichasAux, medicos);
	try
	{
		cout << "\tCENTRO:" << endl;
		miCentro.imprimir();//imprimimos todos los datos del centro, sus medicos y pacientes actuales
	}
	catch (exception* e)
	{
		cout << "Excepcion: " << e->what() << endl;
	}


	try
	{
		//buscamos los pacientes que no vienen hace mas de una semana para contactarlos y ver si continuan con  el tratamiento o no
		cout << "Los pacientes a contactar son: " << endl;
		cListaFichas pacsContactar=miCentro.pacientesaContactar();
		for (int i = 0; i < pacsContactar.size(); i++)
		{
			cout << i + 1 << ") " << pacsContactar[i]->GET_PAC()->GET_NOMBRE()<<" "<< pacsContactar[i]->GET_PAC()->GET_APELLIDO() << endl;
		}
		cout << endl;
		//aca contactamos a esos pacientes
		miCentro.contactar(pacsContactar);//se va a cambiar su es motivo a fin de tratamiento si el paciente decidio no asistir mas

	}
	catch (exception* e)
	{
		cout << "Excepcion: " << e->what() << endl;
	}

	try
	{
		//atiendo a todos los pacientes, los que tienen ficha y los que no
		for (int i = 0; i < pacientesAux.size(); i++)
		{
			miCentro.atenderPaciente(pacientesAux[i]);
			
		}
		
		cout << "\tFICHAS: " << endl;///ahora imprimo las fichas de todos los pacs
		cout << miCentro.GET_FICHAS();
	}
	catch (exception* e)
	{
		cout << "Exception: " << e->what() << endl;
	}
	
	
	try
	{
		//buscamos a los pacientes que tienen algun tumor a cinco porciento de radiacion de terminar el tratamiento
		cListaPacientes pacsImprimir = miCentro.buscar_cincoporciento_terminar();
		cout << "Pacientes que estan con un tumor al 5% de terminar: " << endl;
		for (int i = 0; i < pacsImprimir.size(); i++)
		{
			//solo imprimimos nombre y apellido para que no sea mucho lio
			cout << i + 1 << ") " << pacsImprimir[i]->GET_NOMBRE() << " " << pacsImprimir[i]->GET_APELLIDO() << endl;
		}
		cout << endl;

	}
	catch (exception& e)
	{
		cout << "Excepcion: " << e.what() << endl;
	}

	try
	{
		//busco los pacientes que coinciden con un cierto tumor y terapia
		cListaPacientes porTratamientoTumor = miCentro.buscarTerapiaTumor(mama, braquiterapia);
		cout << "Pacientes con cancer de mama tratados con braquiterapia: " << endl;
		for (int i = 0; i < porTratamientoTumor.size(); i++)
		{
			cout << i + 1 << ") " << porTratamientoTumor[i]->GET_NOMBRE() << " " << porTratamientoTumor[i]->GET_APELLIDO() << endl;
		}
		cout << endl;

		//aca pusimos un tumor y una terapia que no van a coincidir nunca asi salta la excepcion
		cListaPacientes noCoinciden = miCentro.buscarTerapiaTumor(tiroides, radioterapia);
		cout << "Pacientes con cancer de tiroides tratados con radioterapia: " << endl;
		for (int i = 0; i < noCoinciden.size(); i++)
		{
			cout << i + 1 << ") " << noCoinciden[i]->GET_NOMBRE() << " " << noCoinciden[i]->GET_APELLIDO() << endl;
		}
	}
	catch(exception* e)
	{
		cout << "Excepcion: " << e->what() << endl;
	}

	return 0;
}
