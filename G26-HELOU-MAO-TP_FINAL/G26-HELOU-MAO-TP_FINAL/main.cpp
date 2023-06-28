#pragma once
#include "funciones.h"

int main()
{
	cListaPacientes pacientesAux = crearPacs();
	cListaFichas fichasAux = crarFichas();

	list <cMedico*> medicos = crearMedicos();
	cCentro miCentro("Mater Dei", "Salguero y Libertador", fichasAux, medicos);
	try
	{
		cout << "CENTRO:" << endl;
		miCentro.imprimir();
	}
	catch (exception* e)
	{
		cout << "Excepcion: " << e->what() << endl;
	}


	//try
	//{
	//	cout << "Los pacientes a contactar son: " << endl;
	//	cListaFichas f=miCentro.pacientesaContactar();
	//	for (int i = 0; i < f.size(); i++)
	//	{
	//		cout << i + 1 << ") " << f[i]->GET_PAC()->GET_NOMBRE()<<" "<< f[i]->GET_PAC()->GET_APELLIDO() << endl;
	//	}

	//	miCentro.contactar(f);
	//	cout << "Se ha contcatado ha: " << endl;
	//	for (int i = 0; i < f.size(); i++)
	//	{
	//		cout << i + 1 << ") " << f[i]->GET_PAC()->GET_NOMBRE() << " " << f[i]->GET_PAC()->GET_APELLIDO() << endl;
	//	}

	//}
	//catch (exception* e)
	//{
	//	cout << "Excepcion: " << e->what() << endl;
	//}

	try
	{

		for (int i = 0; i < pacientesAux.size(); i++)
		{
			miCentro.atenderPaciente(pacientesAux[i]);
			
		}
		
		cout << "FICHAS: " << endl;
		for (int i = 0; i < miCentro.GET_FICHAS().size(); i++)
		{
			cout<< i+1<<") "<< * miCentro.GET_FICHAS()[i] << endl;
		}
	}
	catch (exception* e)
	{
		cout << "Exception: " << e->what() << endl;
	}
	
	
	try
	{
		cListaPacientes pacsImprimir = miCentro.buscar_cincoporciento_terminar();
		cout << "Pacientes que estan al 5% de terminar: " << endl;
		for (int i = 0; i < pacsImprimir.size(); i++)
		{
			cout << i + 1 << ") " << pacsImprimir[i]->GET_NOMBRE() << " " << pacsImprimir[i]->GET_APELLIDO() << endl;
		}

	}
	catch (exception& e)
	{
		cout << "Excepcion: " << e.what() << endl;
	}

	try
	{
		cListaPacientes porTratamientoTumor = miCentro.buscarTerapiaTumor(mama, braquiterapia);
		cout << "Pacientes con cancer de mama tratados con braquiterapia: " << endl;
		for (int i = 0; i < porTratamientoTumor.size(); i++)
		{
			cout << i + 1 << ") " << porTratamientoTumor[i]->GET_NOMBRE() << " " << porTratamientoTumor[i]->GET_APELLIDO() << endl;
		}

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
