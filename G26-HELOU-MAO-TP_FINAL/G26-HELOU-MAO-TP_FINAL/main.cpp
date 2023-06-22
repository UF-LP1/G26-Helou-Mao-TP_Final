#pragma once
#include "funciones.h"

int main()
{
	srand(time(NULL));
	cCentro miCentro("Mater Dei", "Salguero y Libertador");
	cMedico* ptrMed = new cOncologo("Valentina", "mao");
	miCentro + ptrMed;
	cDosimetrista dos("Guadalupe", "Helou");
	ptrMed = &dos;
	miCentro + ptrMed;
	cPaciente* pac=new cPaciente("Saul", "Lezama", "879765", "8997657", "07/06/2004", 'M', "0+", 65.0);
	miCentro.atenderPaciente(pac);
	
	delete ptrMed;
	delete pac;
	return 0;
}