#pragma once
#include "funciones.h"

int main()
{
	srand(time(NULL));
	cCentro miCentro("Mater Dei", "Salguero y Libertador");
	cMedico* ptrMed = new cOncologo("Valentina", "mao");
	miCentro + ptrMed;

	miCentro + ptrMed;
	
	cPaciente* pac = new cPaciente("Saul", "Lezama", "879765", "8997657", "07/06/2004", 'M', "0+", 65.0);
	miCentro.atenderPaciente(pac);
	cListaPacientes pacientesAux = crearPacs();
	
	cListaFichas fichasAux = crarFichas();
	cCentro miCentro2 ("Mater Dei", "Salguero y Libertador", fichasAux);
	miCentro2 + ptrMed;
	cDosimetrista dos("Guadalupe", "Helou");
	ptrMed = &dos;
	miCentro2 + ptrMed;

	cListaPacientes pacsImprimir=miCentro2.buscarTerapiaTumor(cabezayCuello, braquiterapia);
	cout << pacsImprimir;
	pacsImprimir = miCentro2.buscar_cincoporciento_terminar(ojo);
	cout << pacsImprimir;
	 miCentro2.imprimirPacientes();

	 fichasAux= miCentro.pacientesaContactar();
	 cout << fichasAux;
	delete ptrMed;
	delete pac;
	return 0;
}
