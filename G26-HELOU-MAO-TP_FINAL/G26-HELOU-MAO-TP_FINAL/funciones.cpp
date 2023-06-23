#include "funciones.h"
cListaFichas crarFichas()
{
cBraquiterapia braqui1(4, paladio);
cBraquiterapia braqui2(4, paladio);
cBraquiterapia braqui3(4, paladio);
cSistemica sist1(4);
cSistemica sist2(9);
cSistemica sist3(6);
cRadioterapia radio1(2, protones);
cRadioterapia radio2(1, protones);
cRadioterapia radio3(6, protones);

cTumor tumor1(cabezayCuello, pequenio, &braqui1, 80.0, 150.0, 5.0, 3, 1);
cTumor tumor2(prostatanariz, mediano, &braqui2, 60.0, 150.0, 5.0, 3, 1);
cTumor tumor3(cuelloUtero, pequenio, &sist1, 80.0, 150.0, 5.0, 3, 1);
cTumor tumor4(mama, pequenio, &radio1, 140.0, 150.0, 5.0, 3, 1);
cTumor tumor5(ojo, pequenio, &radio3, 20.0, 150.0, 5.0, 3, 1);
cTumor tumor6(vejiga, pequenio, &braqui3, 80.0, 150.0, 5.0, 3, 1);
cTumor tumor7(tiroides, pequenio, &sist2, 80.0, 150.0, 5.0, 3, 1);
cTumor tumor8(pancreas, mediano, &radio2, 10.0, 150.0, 5.0, 3, 1);
cTumor tumor9(pulmon, pequenio, &sist2, 125.0, 150.0, 5.0, 3, 1);
cTumor tumor10(riñon, grande, &braqui1, 150.0, 150.0, 5.0, 3, 1);
cTumor tumor11(cabezayCuello, pequenio, &braqui1, 5.0, 150.0, 5.0, 3, 1);
cListaTumores lista1;
lista1 + &tumor1;
lista1 + &tumor2;

cListaTumores lista2;
lista2 + &tumor3;
lista2 + &tumor4;

cListaTumores lista3;
lista3 + &tumor5;
lista3 + &tumor6;

cListaTumores lista4;
lista4 + &tumor7;
lista4 + &tumor8;

cListaTumores lista5;
lista5 + &tumor9;
lista5 + &tumor10;

cListaTumores lista6;
lista6 + &tumor11;
lista6 + &tumor7;

	cPaciente pac1("Saul", "Lezama", "879765", "8997657", "07/06/2004", 'M', "0+", 65.0, lista1);
	cPaciente pac2("valen", "Lezama", "879765", "8997657", "07/06/2004", 'M', "0+", 65.0, lista2);
	cPaciente pac3("lupe", "Lezama", "879765", "8997657", "07/06/2004", 'M', "0+", 65.0, lista3);
	cPaciente pac4("pochi", "Lezama", "879765", "8997657", "07/06/2004", 'M', "0+", 65.0, lista4);
	cPaciente pac5("martu", "Lezama", "879765", "8997657", "07/06/2004", 'M', "0+", 65.0, lista5);
	cPaciente pac6("lolo", "Lezama", "879765", "8997657", "07/06/2004", 'M', "0+", 65.0, lista6);
	cPaciente pac7("agos", "Lezama", "879765", "8997657", "07/06/2004", 'M', "0+", 65.0, lista3);
	cPaciente pac8("alma", "Lezama", "879765", "8997657", "07/06/2004", 'M', "0+", 65.0, lista4);
	cPaciente pac9("nica", "Lezama", "879765", "8997657", "07/06/2004", 'M', "0+", 65.0, lista6);
	cPaciente pac10("cami", "Lezama", "879765", "8997657", "07/06/2004", 'M', "0+", 65.0, lista1);
	cPaciente pac11("martu1", "Lezama", "879765", "8997657", "07/06/2004", 'M', "0+", 65.0, lista2);
	cAsistencia asistenciaAux;
	cFicha ficha1(false, false, 30.0, 1, 1, 150.0,230.0, false, &pac1, &asistenciaAux, diagnostico);
	cFicha ficha2(false, false, 30.0, 1, 1, 150.0, 230.0, false, &pac2, &asistenciaAux, diagnostico);
	cFicha ficha3(false, false, 30.0, 1, 1, 150.0, 230.0, false, &pac3, &asistenciaAux, diagnostico);
	cFicha ficha4(false, false, 30.0, 1, 1, 150.0, 230.0, false, &pac4, &asistenciaAux, diagnostico);
	cFicha ficha5(false, false, 30.0, 1, 1, 150.0, 230.0, false, &pac5, &asistenciaAux, diagnostico);
	cFicha ficha6(false, false, 30.0, 1, 1, 150.0, 230.0, false, &pac6, &asistenciaAux, diagnostico);
	cFicha ficha7(false, false, 30.0, 1, 1, 150.0, 230.0, false, &pac7, &asistenciaAux, diagnostico);
	cFicha ficha8(false, false, 30.0, 1, 1, 150.0, 230.0, false, &pac8, &asistenciaAux, diagnostico);
	cFicha ficha9(false, false, 30.0, 1, 1, 150.0, 230.0, false, &pac9, &asistenciaAux, diagnostico);
	cFicha ficha10(false, false, 30.0, 1, 1, 150.0, 230.0, false, &pac10, &asistenciaAux, diagnostico);
	cFicha ficha11(false, false, 30.0, 1, 1, 150.0, 230.0, false, &pac11, &asistenciaAux, diagnostico);
	cListaFichas listaFic;
	listaFic + &ficha1;
	listaFic + &ficha2;
	listaFic + &ficha3;
	listaFic + &ficha4;
	listaFic + &ficha5;
	listaFic + &ficha6;
	listaFic + &ficha7;
	listaFic + &ficha8;
	listaFic + &ficha9;
	listaFic + &ficha10;
	listaFic + &ficha11;
	return listaFic;
	
}



cListaPacientes crearPacs()
{
	cBraquiterapia braqui1(4, paladio);
	cBraquiterapia braqui2(4, paladio);
	cBraquiterapia braqui3(4, paladio);
	cSistemica sist1(4);
	cSistemica sist2(9);
	cSistemica sist3(6);
	cRadioterapia radio1(2, protones);
	cRadioterapia radio2(1, protones);
	cRadioterapia radio3(6, protones);

	cTumor tumor1(cabezayCuello, pequenio, &braqui1, 80.0, 150.0, 5.0, 3, 1);
	cTumor tumor2(prostatanariz, mediano, &braqui2, 60.0, 150.0, 5.0, 3, 1);
	cTumor tumor3(cuelloUtero, pequenio, &sist1, 80.0, 150.0, 5.0, 3, 1);
	cTumor tumor4(mama, pequenio, &radio1, 140.0, 150.0, 5.0, 3, 1);
	cTumor tumor5(ojo, pequenio, &radio3, 20.0, 150.0, 5.0, 3, 1);
	cTumor tumor6(vejiga, pequenio, &braqui3, 80.0, 150.0, 5.0, 3, 1);
	cTumor tumor7(tiroides, pequenio, &sist2, 80.0, 150.0, 5.0, 3, 1);
	cTumor tumor8(pancreas, mediano, &radio2, 10.0, 150.0, 5.0, 3, 1);
	cTumor tumor9(pulmon, pequenio, &sist2, 125.0, 150.0, 5.0, 3, 1);
	cTumor tumor10(riñon, grande, &braqui1, 150.0, 150.0, 5.0, 3, 1);
	cTumor tumor11(cabezayCuello, pequenio, &braqui1, 5.0, 150.0, 5.0, 3, 1);
	cListaTumores lista1;
	lista1 + &tumor1;
	lista1 + &tumor2;

	cListaTumores lista2;
	lista2 + &tumor3;
	lista2 + &tumor4;

	cListaTumores lista3;
	lista3 + &tumor5;
	lista3 + &tumor6;

	cListaTumores lista4;
	lista4 + &tumor7;
	lista4 + &tumor8;

	cListaTumores lista5;
	lista5 + &tumor9;
	lista5 + &tumor10;

	cListaTumores lista6;
	lista6 + &tumor11;
	lista6 + &tumor7;

	
	cPaciente pac1("Saul", "Lezama", "879765", "8997657", "07/06/2004", 'M', "0+", 65.0,lista1);
	cPaciente pac2("valen", "Lezama", "879765", "8997657", "07/06/2004", 'M', "0+", 65.0,lista2);
	cPaciente pac3("lupe", "Lezama", "879765", "8997657", "07/06/2004", 'M', "0+", 65.0, lista3);
	cPaciente pac4("pochi", "Lezama", "879765", "8997657", "07/06/2004", 'M', "0+", 65.0, lista4);
	cPaciente pac5("martu", "Lezama", "879765", "8997657", "07/06/2004", 'M', "0+", 65.0, lista5);
	cPaciente pac6("lolo", "Lezama", "879765", "8997657", "07/06/2004", 'M', "0+", 65.0, lista6);
	cPaciente pac7("agos", "Lezama", "879765", "8997657", "07/06/2004", 'M', "0+", 65.0, lista3);
	cPaciente pac8("alma", "Lezama", "879765", "8997657", "07/06/2004", 'M', "0+", 65.0, lista4);
	cPaciente pac9("nica", "Lezama", "879765", "8997657", "07/06/2004", 'M', "0+", 65.0, lista6);
	cPaciente pac10("cami", "Lezama", "879765", "8997657", "07/06/2004", 'M', "0+", 65.0, lista1);
	cPaciente pac11("martu1", "Lezama", "879765", "8997657", "07/06/2004", 'M', "0+", 65.0, lista2);

	cListaPacientes listaPac;
	listaPac + &pac1;
	listaPac + &pac2;
	listaPac + &pac3;
	listaPac + &pac4;
	listaPac + &pac5;
	listaPac + &pac6;
	listaPac + &pac7;
	listaPac + &pac8;
	listaPac + &pac9;
	listaPac + &pac10;
	listaPac + &pac11;
	return listaPac;

}
cListaTumores crearTumores()
{
	cBraquiterapia braqui1(4, paladio);
	cBraquiterapia braqui2(4, paladio);
	cBraquiterapia braqui3(4, paladio);
	cSistemica sist1(4);
	cSistemica sist2(9);
	cSistemica sist3(6);
	cRadioterapia radio1(2, protones);
	cRadioterapia radio2(1, protones);
	cRadioterapia radio3(6, protones);

	cTumor tumor1(cabezayCuello, pequenio, &braqui1, 80.0, 150.0, 5.0, 3, 1);
	cTumor tumor2(prostatanariz, mediano, &braqui2, 60.0, 150.0, 5.0, 3, 1);
	cTumor tumor3(cuelloUtero, pequenio, &sist1, 80.0, 150.0, 5.0, 3, 1);
	cTumor tumor4(mama, pequenio, &radio1, 140.0, 150.0, 5.0, 3, 1);
	cTumor tumor5(ojo, pequenio, &radio3, 20.0, 150.0, 5.0, 3, 1);
	cTumor tumor6(vejiga, pequenio, &braqui3, 80.0, 150.0, 5.0, 3, 1);
	cTumor tumor7(tiroides, pequenio, &sist2, 80.0, 150.0, 5.0, 3, 1);
	cTumor tumor8(pancreas, mediano, &radio2, 10.0, 150.0, 5.0, 3, 1);
	cTumor tumor9(pulmon, pequenio, &sist2, 125.0, 150.0, 5.0, 3, 1);
	cTumor tumor10(riñon, grande, &braqui1, 150.0, 150.0, 5.0, 3, 1);
	cTumor tumor11(cabezayCuello, pequenio, &braqui1, 5.0, 150.0, 5.0, 3, 1);
	cListaTumores lista1;
	lista1 + &tumor1;
	lista1 + &tumor2;


	lista1 + &tumor3;
	lista1 + &tumor4;
;
	lista1 + &tumor5;
	lista1 + &tumor6;


	lista1 + &tumor7;
	lista1 + &tumor8;


	lista1 + &tumor9;
	lista1 + &tumor10;


	lista1 + &tumor11;
	lista1 + &tumor7;

	return lista1;
}
