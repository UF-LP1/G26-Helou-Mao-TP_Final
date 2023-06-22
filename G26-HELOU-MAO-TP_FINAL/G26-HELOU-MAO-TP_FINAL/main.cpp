#pragma once
#include "funciones.h"

int main()
{


	cCentro miCentro("Helou-Mao", "Sarmiento1800");
	cMedico* ptrMed = new cOncologo("Valentina", "mao");
	miCentro + ptrMed;
	cDosimetrista dos("Guadalupe", "Helou");
	ptrMed = &dos;
	miCentro + ptrMed;

	cPaciente* pac=new cPaciente("Saul", "Lezama", "879765", "8997657", "07/06/2004", 'M', "0+", 65.0);
	miCentro.atenderPaciente(pac);
	return 0;
}