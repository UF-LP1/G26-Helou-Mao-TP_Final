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

	cTumor tumor1(cabezayCuello, pequenio, &braqui1, 80.0, 150.0, 5.0, 3, 4);
	cTumor tumor2(prostatanariz, mediano, &braqui2, 60.0, 150.0, 5.0, 3, 1);	
	cTumor tumor3(cuelloUtero, pequenio, &sist1, 80.0, 150.0, 5.0, 5, 4);
	cTumor tumor4(mama, pequenio, &radio1, 140.0, 150.0, 5.0, 3, 1);
	cTumor tumor5(ojo, pequenio, &radio3, 20.0, 150.0, 5.0, 3, 1);
	cTumor tumor6(vejiga, pequenio, &braqui3, 80.0, 150.0, 5.0, 3, 1);
	cTumor tumor7(tiroides, pequenio, &sist2, 80.0, 150.0, 5.0, 3, 1);
	cTumor tumor8(pancreas, mediano, &radio2, 10.0, 150.0, 5.0, 3, 1);
	cTumor tumor9(pulmon, pequenio, &sist2, 125.0, 150.0, 5.0, 3, 1);
	cTumor tumor10(riñon, grande, &braqui1, 150.0, 150.0, 5.0, 3, 1);
	cTumor tumor11(cabezayCuello, pequenio, &braqui1, 5.0, 150.0, 5.0, 3, 1);
	cListaTumores lista1;
	lista1 + tumor1;
	lista1 + tumor2;

	cListaTumores lista2;
	lista2 + tumor3;
	lista2 + tumor4;

	cListaTumores lista3;
	lista3 + tumor5;
	lista3 + tumor6;

	cListaTumores lista4;
	lista4 + tumor7;
	lista4 + tumor8;

	cListaTumores lista5;
	lista5 + tumor9;
	lista5 + tumor10;

	cListaTumores lista6;
	lista6 + tumor11;
	lista6 + tumor7;

	cPaciente* pac1 = new cPaciente("Saul", "Lezama", "879765", "8997657", "07/06/2004", 'M', "0+", 65.0, lista1);
	cPaciente* pac2 = new cPaciente("valen", "Lezama", "879765", "8997657", "07/06/2004", 'M', "0+", 65.0, lista2);
	cPaciente* pac3 = new cPaciente("lupe", "Lezama", "879765", "8997657", "07/06/2004", 'M', "0+", 65.0, lista3);
	cPaciente* pac4 = new cPaciente("pochi", "Lezama", "879765", "8997657", "07/06/2004", 'M', "0+", 65.0, lista4);
	cPaciente* pac5 = new cPaciente("martu", "Lezama", "879765", "8997657", "07/06/2004", 'M', "0+", 65.0, lista5);
	cPaciente* pac6 = new cPaciente("lolo", "Lezama", "879765", "8997657", "07/06/2004", 'M', "0+", 65.0, lista6);
	cPaciente* pac7 = new cPaciente("agos", "Lezama", "879765", "8997657", "07/06/2004", 'M', "0+", 65.0, lista3);
	cPaciente* pac8 = new cPaciente("alma", "Lezama", "879765", "8997657", "07/06/2004", 'M', "0+", 65.0, lista4);
	cPaciente* pac9 = new cPaciente("nica", "Lezama", "879765", "8997657", "07/06/2004", 'M', "0+", 65.0, lista6);
	cPaciente* pac10 = new cPaciente("cami", "Lezama", "879765", "8997657", "07/06/2004", 'M', "0+", 65.0, lista1);
	cPaciente* pac11 = new cPaciente("martu1", "Lezama", "879765", "8997657", "07/06/2004", 'M', "0+", 65.0, lista2);
	cAsistencia asistenciaAux;
	cListaFichas listaFic;
	cFicha *ficha1=new cFicha(false, false, 30.0, 1, 1, 150.0,230.0, false, pac1, &asistenciaAux, diagnostico);
	listaFic + ficha1;
	cFicha *ficha2 = new cFicha(false, false, 30.0, 1, 1, 150.0, 230.0, false, pac2, &asistenciaAux, diagnostico);
	listaFic + ficha2;
	cFicha* ficha3 = new cFicha(false, false, 30.0, 1, 1, 150.0, 230.0, false, pac3, &asistenciaAux, diagnostico);
	listaFic + ficha3;
	cFicha *ficha4 = new cFicha(false, false, 30.0, 1, 1, 150.0, 230.0, false, pac4, &asistenciaAux, diagnostico);
	listaFic + ficha4;
	cFicha* ficha5 = new cFicha(false, false, 30.0, 1, 1, 150.0, 230.0, false, pac5, &asistenciaAux, diagnostico);
	listaFic + ficha5;
	cFicha *ficha6 = new cFicha(false, false, 30.0, 1, 1, 150.0, 230.0, false, pac6, &asistenciaAux, diagnostico);
	listaFic + ficha6;
	cFicha *ficha7 = new cFicha(false, false, 30.0, 1, 1, 150.0, 230.0, false, pac7, &asistenciaAux, diagnostico);
	listaFic + ficha7;
	cFicha *ficha8 = new cFicha(false, false, 30.0, 1, 1, 150.0, 230.0, false, pac8, &asistenciaAux, diagnostico);
	listaFic + ficha8;
	cFicha *ficha9 = new cFicha(false, false, 30.0, 1, 1, 150.0, 230.0, false, pac9, &asistenciaAux, diagnostico);
	listaFic + ficha9;
	cFicha* ficha10 = new cFicha(false, false, 30.0, 1, 1, 150.0, 230.0, false,pac10, &asistenciaAux, diagnostico);
	listaFic + ficha10;
	cFicha *ficha11 = new cFicha(false, false, 30.0, 1, 1, 150.0, 230.0, false, pac11, &asistenciaAux, diagnostico);
	listaFic + ficha11;
	return listaFic;
	delete ficha1;
	delete ficha2;
	delete ficha3;
	delete ficha4;
	delete ficha5;
	delete ficha6;
	delete ficha7;
	delete ficha8;
	delete ficha9;
	delete ficha10;
	delete ficha11;
	delete pac1;
	delete pac2;
	delete pac3;
	delete pac4;
	delete pac5;
	delete pac6;
	delete pac7;
	delete pac8;
	delete pac9;
	delete pac10;
	delete pac11;
	
}



cListaPacientes crearPacs()
{
	cBraquiterapia* braqui1 = new cBraquiterapia(4, paladio);
	cBraquiterapia* braqui2 = new cBraquiterapia(4, paladio);
	cBraquiterapia* braqui3 = new cBraquiterapia(4, paladio);
	cSistemica* sist1 = new cSistemica(4);
	cSistemica* sist2 = new cSistemica(9);
	cSistemica* sist3 = new cSistemica(6);
	cRadioterapia* radio1 = new cRadioterapia(2, protones);
	cRadioterapia* radio2 = new cRadioterapia(1, protones);
	cRadioterapia* radio3 = new cRadioterapia(6, protones);

	cTumor* tumor1=new cTumor(cabezayCuello, pequenio, braqui1, 80.0, 150.0, 5.0, 3, 1);
	cTumor *tumor2 = new cTumor(prostatanariz, mediano, braqui2, 60.0, 150.0, 5.0, 3, 1);
	cTumor *tumor3 = new cTumor(cuelloUtero, pequenio, sist1, 80.0, 150.0, 5.0, 3, 1);
	cTumor *tumor4 = new cTumor(mama, pequenio, radio1, 140.0, 150.0, 5.0, 3, 1);
	cTumor* tumor5 = new cTumor(ojo, pequenio, radio3, 20.0, 150.0, 5.0, 3, 1);
	cTumor *tumor6 = new cTumor(vejiga, pequenio, braqui3, 80.0, 150.0, 5.0, 3, 1);
	cTumor* tumor7 = new cTumor(tiroides, pequenio, sist2, 80.0, 150.0, 5.0, 3, 1);
	cTumor *tumor8 = new cTumor(pancreas, mediano, radio2, 10.0, 150.0, 5.0, 3, 1);
	cTumor* tumor9 = new cTumor(pulmon, pequenio, sist2, 125.0, 150.0, 5.0, 3, 1);
	cTumor* tumor10 = new cTumor(riñon, grande, braqui1, 150.0, 150.0, 5.0, 3, 1);
	cTumor* tumor11 = new cTumor(cabezayCuello, pequenio, braqui1, 5.0, 150.0, 5.0, 3, 1);
	cListaTumores lista1;
	lista1 + *tumor1;
	lista1 + *tumor2;

	cListaTumores lista2;
	lista2 +*tumor3;
	lista2 +*tumor4;

	cListaTumores lista3;
	lista3 +*tumor5;
	lista3 +*tumor6;

	cListaTumores lista4;
	lista4 +*tumor7;
	lista4 +*tumor8;

	cListaTumores lista5;
	lista5 +*tumor9;
	lista5 +*tumor10;

	cListaTumores lista6;
	lista6 + *tumor11;
	lista6 + *tumor7;

	cListaPacientes listaPac;

	cPaciente *pac1=new cPaciente("Saul", "Lezama", "879765", "8997657", "07/06/2004", 'M', "0+", 65.0,lista1);
	cPaciente* pac2 = new cPaciente("valen", "Lezama", "879765", "8997657", "07/06/2004", 'M', "0+", 65.0,lista2);
	cPaciente* pac3 = new cPaciente("lupe", "Lezama", "879765", "8997657", "07/06/2004", 'M', "0+", 65.0, lista3);
	cPaciente* pac4 = new cPaciente("pochi", "Lezama", "879765", "8997657", "07/06/2004", 'M', "0+", 65.0, lista4);
	cPaciente* pac5 = new cPaciente("martu", "Lezama", "879765", "8997657", "07/06/2004", 'M', "0+", 65.0, lista5);
	cPaciente* pac6 = new cPaciente("lolo", "Lezama", "879765", "8997657", "07/06/2004", 'M', "0+", 65.0, lista6);
	cPaciente* pac7 = new cPaciente("agos", "Lezama", "879765", "8997657", "07/06/2004", 'M', "0+", 65.0, lista3);
	cPaciente* pac8 = new cPaciente("alma", "Lezama", "879765", "8997657", "07/06/2004", 'M', "0+", 65.0, lista4);
	cPaciente* pac9 = new cPaciente("nica", "Lezama", "879765", "8997657", "07/06/2004", 'M', "0+", 65.0, lista6);
	cPaciente* pac10 = new cPaciente("cami", "Lezama", "879765", "8997657", "07/06/2004", 'M', "0+", 65.0, lista1);
	cPaciente* pac11 = new cPaciente("martu1", "Lezama", "879765", "8997657", "07/06/2004", 'M', "0+", 65.0, lista2);


	listaPac + pac1;
	listaPac + pac2;
	listaPac + pac3;
	listaPac + pac4;
	listaPac + pac5;
	listaPac + pac6;
	listaPac + pac7;
	listaPac + pac8;
	listaPac + pac9;
	listaPac + pac10;
	listaPac + pac11;
	return listaPac;
	delete pac1;
	delete pac2;
	delete pac3;
	delete pac4;
	delete pac5;
	delete pac6;
	delete pac7;
	delete pac8;
	delete pac9;
	delete pac10;
	delete pac11;
	delete braqui1;
	delete braqui2;
	delete braqui3;
	delete sist1;
	delete sist2;
	delete sist3;
	delete radio1;
	delete radio2;
	delete radio3;
	delete tumor1;
	delete tumor2;
	delete tumor3;
	delete tumor4;
	delete tumor5;
	delete tumor6;
	delete tumor7;
	delete tumor8;
	delete tumor9;
	delete tumor10;
	delete tumor11;


}
cListaTumores crearTumores()
{
	cBraquiterapia *braqui1=new cBraquiterapia(4, paladio);
	cBraquiterapia* braqui2 = new cBraquiterapia(4, paladio);
	cBraquiterapia* braqui3 = new cBraquiterapia(4, paladio);
	cSistemica *sist1=new cSistemica(4);
	cSistemica* sist2 = new cSistemica(9);
	cSistemica* sist3 = new cSistemica(6);
	cRadioterapia *radio1=new cRadioterapia(2, protones);
	cRadioterapia* radio2 = new cRadioterapia(1, protones);
	cRadioterapia* radio3 = new cRadioterapia(6, protones);

	cTumor* tumor1 = new cTumor(cabezayCuello, pequenio, braqui1, 80.0, 150.0, 5.0, 3, 1);
	cTumor* tumor2 = new cTumor(prostatanariz, mediano, braqui2, 60.0, 150.0, 5.0, 3, 1);
	cTumor* tumor3 = new cTumor(cuelloUtero, pequenio, sist1, 80.0, 150.0, 5.0, 3, 1);
	cTumor* tumor4 = new cTumor(mama, pequenio, radio1, 140.0, 150.0, 5.0, 3, 1);
	cTumor* tumor5 = new cTumor(ojo, pequenio, radio3, 20.0, 150.0, 5.0, 3, 1);
	cTumor* tumor6 = new cTumor(vejiga, pequenio, braqui3, 80.0, 150.0, 5.0, 3, 1);
	cTumor* tumor7 = new cTumor(tiroides, pequenio, sist2, 80.0, 150.0, 5.0, 3, 1);
	cTumor* tumor8 = new cTumor(pancreas, mediano, radio2, 10.0, 150.0, 5.0, 3, 1);
	cTumor* tumor9 = new cTumor(pulmon, pequenio, sist2, 125.0, 150.0, 5.0, 3, 1);
	cTumor* tumor10 = new cTumor(riñon, grande, braqui1, 150.0, 150.0, 5.0, 3, 1);
	cTumor* tumor11 = new cTumor(cabezayCuello, pequenio, braqui1, 5.0, 150.0, 5.0, 3, 1);
	cListaTumores lista1;
	lista1 + *tumor1;
	lista1 + *tumor2;


	lista1 +* tumor3;
	lista1 + *tumor4;
;
	lista1 +* tumor5;
	lista1 + *tumor6;


	lista1 +* tumor7;
	lista1 + *tumor8;


	lista1 +*tumor9;
	lista1 +*tumor10;


	lista1 +*tumor11;
	lista1 +*tumor7;

	return lista1;
	delete braqui1;
	delete braqui2;
	delete braqui3;
	delete sist1;
	delete sist2;
	delete sist3;
	delete radio1;
	delete radio2;
	delete radio3;
	delete tumor1;
	delete tumor2;
	delete tumor3;
	delete tumor4;
	delete tumor5;
	delete tumor6;
	delete tumor7;
	delete tumor8;
	delete tumor9;
	delete tumor10;
	delete tumor11;
}
