#pragma once
#include "funciones.h"

int main()
{
	srand(time(NULL));
	cListaPacientes pacientesAux = crearPacs();
	cListaFichas fichasAux = crarFichas();
	cCentro miCentro("Mater Dei", "Salguero y Libertador", fichasAux);
	 cOncologo onc("Valentina", "mao");
	miCentro +&onc;
	cDosimetrista dos("Guadalupe", "Helou");
	cDosimetrista dos1("Mailen", "Zino");

	miCentro + &dos;
	miCentro + &dos1;
	
	cPaciente* pac = new cPaciente("Saul", "Lezama", "45783437", "8997657", "07/06/2004", 'M', "0+", 65.0);
	miCentro.atenderPaciente(pac);
	cout << *pac;
	//cPaciente* pacAux = new cPaciente("valen", "Lezama", "776544", "8997657", "07/06/2004", 'M', "0+", 65.0);
	//miCentro.atenderPaciente(pacAux);
	/*cout << pacAux->GET_TUMORES()[0]->GET_SESIONES_REALIZADAS();
	cout << pacAux->GET_TUMORES()[1]->GET_SESIONES_REALIZADAS();
	cout << pacAux->GET_TUMORES()[2]->GET_SESIONES_REALIZADAS();*/
	cListaPacientes pacsImprimir = miCentro.buscar_cincoporciento_terminar();
	cout << pacsImprimir;
	miCentro.imprimirPacientes();

	// fichasAux= miCentro.pacientesaContactar();
	// cout << fichasAux;

	delete pac;
	return 0;
}
