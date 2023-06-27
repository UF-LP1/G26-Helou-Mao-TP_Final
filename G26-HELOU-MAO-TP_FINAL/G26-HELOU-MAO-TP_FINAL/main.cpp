#pragma once
#include "funciones.h"

int main()
{
	cListaPacientes pacientesAux = crearPacs();
	cListaFichas fichasAux = crarFichas();

	list <cMedico*> medicos = crearMedicos();
	cCentro miCentro("Mater Dei", "Salguero y Libertador", fichasAux, medicos);
	/*try*/
	//{

		for (int i = 0; i < pacientesAux.size(); i++)
		{
			miCentro.atenderPaciente(pacientesAux[i]);
			
		}
	/*	for (int i = 0; i < miCentro.GET_FICHAS().size(); i++)
		{
			cout << *miCentro.GET_FICHAS()[i];
		}*/
	//}
	//catch (exception* e)
	//{
		//cout << "Exception: " << e->what() << endl;
	//}
	
	
	cListaPacientes pacsImprimir = miCentro.buscar_cincoporciento_terminar();
	cout << pacsImprimir;
	miCentro.imprimirPacientes();

	return 0;
}
