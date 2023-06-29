#include "funciones.h"
list <cMedico*> crearMedicos()
{
	cDosimetrista* dos= new cDosimetrista("Diego", "Maradona");
	cDosimetrista* dos1 = new cDosimetrista("Mailen", "Zino");
	cDosimetrista* dos2= new cDosimetrista("Francisco", "Campo");
	cDosimetrista* dos3= new cDosimetrista("Ezequiel", "Stanganelli");
	cDosimetrista* dos4= new cDosimetrista("Cindy", "Aldet");
	cDosimetrista* dos5= new cDosimetrista("Sol", "Segura");
	cDosimetrista* dos6= new cDosimetrista("Sol", "Malacari");
	cDosimetrista* dos7= new cDosimetrista("Eugenia", "Drimer");
	cDosimetrista* dos8= new cDosimetrista("Andrea", "Lanaro");
	cDosimetrista* dos9 = new cDosimetrista("Manuel", "Pampa");
	cOncologo* onc1 = new cOncologo("Mirtha", "Legrand");
	cOncologo* onc2 = new cOncologo("Julian", "Alvarez");
	cOncologo* onc3 = new cOncologo("Paulo", "Dybala");
	cOncologo* onc4 = new cOncologo("Papu", "Gomez");
	cOncologo* onc5 = new cOncologo("Huevo", "Acuña");
	cOncologo* onc6 = new cOncologo("Gonzalo", "Montiel");
	cOncologo* onc7 = new cOncologo("Emiliano", "Martinez");
	cOncologo* onc8 = new cOncologo("Gio", "LoCelso");
	cOncologo* onc9 = new cOncologo("Rodrigo", "DePaul");
	cOncologo* onc10 = new cOncologo("Alexis", "McAllister");
	list <cMedico*> medicos;
	medicos.push_back(dos);
	medicos.push_back(dos1);
	medicos.push_back(dos2);
	medicos.push_back(dos3);
	medicos.push_back(dos4);
	medicos.push_back(dos5);
	medicos.push_back(dos6);
	medicos.push_back(dos7);
	medicos.push_back(dos8);
	medicos.push_back(dos9);
	medicos.push_back(onc1);
	medicos.push_back(onc2);
	medicos.push_back(onc4);
	medicos.push_back(onc3);
	medicos.push_back(onc5);
	medicos.push_back(onc6);
	medicos.push_back(onc7);
	medicos.push_back(onc8);
	medicos.push_back(onc9);
	medicos.push_back(onc10);
	return medicos;
	delete onc1;
	delete dos1;
	delete onc2;
	delete dos;
	delete dos2;
	delete onc3;
	delete dos3;
	delete onc4;
	delete dos4;
	delete onc5;
	delete dos5;
	delete onc6;
	delete dos6;
	delete onc7;
	delete onc10;
	delete onc9;
	delete dos8;
	delete dos9;
	delete dos7;
	delete onc8;
}
cListaFichas crarFichas()
{
	cBraquiterapia* braqui1 = new cBraquiterapia(4, paladio);
	cBraquiterapia* braqui2 = new cBraquiterapia(3, yodoRadioactivo);
	cBraquiterapia* braqui3 = new cBraquiterapia(1, paladio);
	cSistemica* sist1 = new cSistemica(4);
	cSistemica* sist2 = new cSistemica(9);
	cSistemica* sist3 = new cSistemica(6);
	cRadioterapia* radio1 = new cRadioterapia(2, protones);
	cRadioterapia* radio2 = new cRadioterapia(1, electrones);
	cRadioterapia* radio3 = new cRadioterapia(6, fotones);

	cTumor* tumor1 = new cTumor(cabezayCuello, pequenio,  80.0, 150.0, 5.0, 3, braqui1, 3);
	cTumor* tumor2 = new cTumor(prostata, mediano,  15.0, 60.0, 4.0, 3, sist1, 3);
	cTumor* tumor3 = new cTumor(cuelloUtero, pequenio,  80.0, 150.0, 7.0, 3, braqui1, 2);
	cTumor* tumor4 = new cTumor(mama, pequenio,  145.0, 150.0, 8.0, 5, braqui3, 3);
	cTumor* tumor5 = new cTumor(ojo, pequenio,  20.0, 150.0, 6.0, 3, braqui2, 3);
	cTumor* tumor6 = new cTumor(vejiga, mediano,  20.0, 60.0, 2, 2, radio1, 2);
	cTumor* tumor7 = new cTumor(tiroides, pequenio,  10.0, 60.0, 3.0, 2, sist2,1);
	cTumor* tumor8 = new cTumor(pancreas, mediano,  10.0, 60.0, 1.0, 6, radio2, 3);
	cTumor* tumor9 = new cTumor(pulmon, pequenio,  20.0, 60.0, 2.0, 3, radio1, 1);
	cTumor* tumor10 = new cTumor(riñon, grande,  10.0, 60.0, 1.0, 4, radio3, 2);
	cTumor* tumor11 = new cTumor(nariz, pequenio,  5.0, 60.0, 5.0, 2, radio1, 0);

	cListaTumores lista1;
	lista1 + *tumor1;
	lista1 + *tumor2;

	cListaTumores lista2;
	lista2 + *tumor3;
	lista2 + *tumor4;

	cListaTumores lista3;
	lista3 + *tumor5;
	lista3 + *tumor6;

	cListaTumores lista4;
	lista4 + *tumor7;
	lista4 + *tumor8;

	cListaTumores lista5;
	lista5 + *tumor9;
	lista5 + *tumor10;

	cListaTumores lista6;
	lista6 + *tumor11;
	lista6 + *tumor7;

	cPaciente* pac1 = new cPaciente("Saul", "Lezama", "1", "8997657", "07/06/2004", 'M', "0+", 65.0);
	cPaciente* pac2 = new cPaciente("Valentina", "Mao", "2", "8997657", "08/03/2004", 'F', "0-", 50.0, lista2);
	cPaciente* pac3 = new cPaciente("Guadalupe", "Helou", "3", "8997657", "09/04/2004", 'F', "A+", 45.0, lista3);
	cPaciente* pac4 = new cPaciente("Paula", "Pecker", "4", "8997657", "21/10/2004", 'F', "A-", 35.);
	cPaciente* pac5 = new cPaciente("Martina", "Meyer", "5", "8997657", "30/03/2004", 'F', "B+", 85.0, lista5);
	cPaciente* pac6 = new cPaciente("Lorenzo", "Mazzante", "6", "8997657", "04/02/2004", 'M', "B+", 25.0, lista6);
	cPaciente* pac7 = new cPaciente("Agostina", "Nobo", "7", "8997657", "09/11/2004", 'F', "0+", 75.0, lista3);
	cPaciente* pac8 = new cPaciente("Alma", "Marquez", "8", "8997657", "16/01/2004", 'F', "0-", 75.0, lista4);
	cPaciente* pac9 = new cPaciente("Nicanor", "Garcia Saavedra", "9", "8997657", "07/02/2004", 'M', "A+", 95.0);
	cPaciente* pac10 = new cPaciente("Camila", "Zavidowski", "10", "8997657", "01/03/2004", 'F', "0+", 65.0, lista1);
	cPaciente* pac11 = new cPaciente("Martina", "Hanselmann", "11", "8997657", "07/12/2004", 'F', "0+", 45.0);
	
	int segundosxdia = 86400;
	time_t ahora = time(NULL);//creo varable y la inicializo en el tiempo actual
	time_t haceUnMes = ahora - (30 * segundosxdia);
	time_t haceDosSemanas = ahora - (14 * segundosxdia);
	
	cListaFichas listaFic;
	cFicha *ficha2 = new cFicha(false, true, 150, 1, 1, 150.0, 0, false, pac2, haceUnMes, reevaluacion);//esta en lista de espera, se reevalua cuando vuelve. Igual hace un mes que falto a su turno, se lo va a contactar
	listaFic + *ficha2;
	cFicha* ficha3 = new cFicha(false, false, 30.0, 1, 1, 150.0, 0, false, pac3, haceUnMes, evaluacion);
	listaFic + *ficha3;
	cFicha* ficha5 = new cFicha(false, false, 150.0, 1, 1, 150.0, 20, false, pac5, ahora, evaluacion);
	listaFic + *ficha5;
	cFicha *ficha6 = new cFicha(false, true, 30.0, 1, 1, 150.0, 0, false, pac6,ahora, reevaluacion);//esta en lista de espera, se reevalua cuando vuelve
	listaFic + *ficha6;
	cFicha *ficha7 = new cFicha(true, false, 30.0, 1, 1, 150.0, 0, false, pac7, ahora, finTratamiento);//fue dado de alta
	listaFic + *ficha7;
	cFicha *ficha8 = new cFicha(false, false, 30.0, 1, 1, 150.0, 15, false, pac8, haceDosSemanas, evaluacion);//no va hace dos semanas, puede que deje de ir porloque sera dado de alta
	listaFic + *ficha8;
	cFicha* ficha10 = new cFicha(false, false, 30.0, 1, 1, 150.0, 10, false,pac10, haceDosSemanas, evaluacion);
	listaFic + *ficha10;
	return listaFic;
	delete ficha2;
	delete ficha3;
	delete ficha5;
	delete ficha6;
	delete ficha7;
	delete ficha8;
	delete ficha10;
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
	cBraquiterapia* braqui2 = new cBraquiterapia(3, yodoRadioactivo);
	cBraquiterapia* braqui3 = new cBraquiterapia(1, paladio);
	cSistemica* sist1 = new cSistemica(4);
	cSistemica* sist2 = new cSistemica(9);
	cSistemica* sist3 = new cSistemica(6);
	cRadioterapia* radio1 = new cRadioterapia(2, protones);
	cRadioterapia* radio2 = new cRadioterapia(1, electrones);
	cRadioterapia* radio3 = new cRadioterapia(6, fotones);
	cTumor* tumor1 = new cTumor(cabezayCuello, pequenio, 80.0, 150.0, 5.0, 3, braqui1, 3);
	cTumor* tumor2 = new cTumor(prostata, mediano, 15.0, 60.0, 4.0, 3, sist1, 3);
	cTumor* tumor3 = new cTumor(cuelloUtero, pequenio, 80.0, 150.0, 7.0, 3, braqui1, 2);
	cTumor* tumor4 = new cTumor(mama, pequenio, 145.0, 150.0, 8.0, 5, braqui3, 3);
	cTumor* tumor5 = new cTumor(ojo, pequenio, 20.0, 150.0, 6.0, 3, braqui2, 3);
	cTumor* tumor6 = new cTumor(vejiga, mediano, 20.0, 60.0, 2, 2, radio1, 2);
	cTumor* tumor7 = new cTumor(tiroides, pequenio, 10.0, 60.0, 3.0, 2, sist2, 1);
	cTumor* tumor8 = new cTumor(pancreas, mediano, 10.0, 60.0, 1.0, 6, radio2, 3);
	cTumor* tumor9 = new cTumor(pulmon, pequenio, 20.0, 60.0, 2.0, 3, radio1, 1);
	cTumor* tumor10 = new cTumor(riñon, grande, 10.0, 60.0, 1.0, 4, radio3, 2);
	cTumor* tumor11 = new cTumor(nariz, pequenio, 5.0, 60.0, 5.0, 2, radio1, 0);
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

	cPaciente* pac1 = new cPaciente("Saul", "Lezama", "1", "8997657", "07/06/2004", 'M', "0+", 65.0);
	cPaciente* pac2 = new cPaciente("Valentina", "Mao", "2", "8997657", "08/03/2004", 'F', "0-", 50.0, lista2);
	cPaciente* pac3 = new cPaciente("Guadalupe", "Helou", "3", "8997657", "09/04/2004", 'F', "A+", 45.0, lista3);
	cPaciente* pac4 = new cPaciente("Paula", "Pecker", "4", "8997657", "21/10/2004", 'F', "A-", 35.0);
	cPaciente* pac5 = new cPaciente("Martina", "Meyer", "5", "8997657", "30/03/2004", 'F', "B+", 85.0, lista5);
	cPaciente* pac6 = new cPaciente("Lorenzo", "Mazzante", "6", "8997657", "04/02/2004", 'M', "B+", 25.0, lista6);
	cPaciente* pac12 = new cPaciente("Nicolas", "Otamendi", "12", "8997657", "07/06/1989", 'M', "0+", 45.0);
	cPaciente* pac13 = new cPaciente("Leandro", "Paredes", "13", "8997657", "07/06/1993", 'M', "0+", 75.0);
	cPaciente* pac14 = new cPaciente("Enzo", "Fernandez", "14", "8997657", "17/01/2001", 'M', "0+", 85.0);
	cPaciente* pac15 = new cPaciente("Cuti", "Romero", "15", "8997657", "07/06/1990", 'M', "0+", 65.0);
	cPaciente* pac16 = new cPaciente("Lionel", "Messi", "16", "8997657", "24/06/1987", 'M', "0+", 95.0);
	cPaciente* pac7 = new cPaciente("Agostina", "Nobo", "7", "8997657", "09/11/2004", 'F', "0+", 75.0, lista3);
	cPaciente* pac8 = new cPaciente("Alma", "Marquez", "8", "8997657", "16/01/2004", 'F', "0-", 75.0, lista4);
	cPaciente* pac9 = new cPaciente("Nicanor", "Garcia Saavedra", "9", "8997657", "07/02/2004", 'M', "A+", 95.0);
	cPaciente* pac10 = new cPaciente("Camila", "Zavidowski", "10", "8997657", "01/03/2004", 'F', "0+", 65.0, lista1);
	cPaciente* pac11 = new cPaciente("Martina", "Hanselmann", "11", "8997657", "07/12/2004", 'F', "0+", 45.0);


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
	listaPac + pac12;
	listaPac + pac13;
	listaPac + pac14;
	listaPac + pac15;
	listaPac + pac16;


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
	delete pac12;
	delete pac13;
	delete pac14;
	delete pac15;
	delete pac16;

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

	cTumor* tumor1 = new cTumor(cabezayCuello, pequenio, 80.0, 150.0, 5.0, 3, braqui1, 3);
	cTumor* tumor2 = new cTumor(prostata, mediano, 15.0, 60.0, 4.0, 3, sist1, 3);
	cTumor* tumor3 = new cTumor(cuelloUtero, pequenio, 80.0, 150.0, 7.0, 3, braqui1, 2);
	cTumor* tumor4 = new cTumor(mama, pequenio, 145.0, 150.0, 8.0, 5, braqui3, 3);
	cTumor* tumor5 = new cTumor(ojo, pequenio, 20.0, 150.0, 6.0, 3, braqui2, 3);
	cTumor* tumor6 = new cTumor(vejiga, mediano, 20.0, 60.0, 2, 2, radio1, 2);
	cTumor* tumor7 = new cTumor(tiroides, pequenio, 10.0, 60.0, 3.0, 2, sist2, 1);
	cTumor* tumor8 = new cTumor(pancreas, mediano, 10.0, 60.0, 1.0, 6, radio2, 3);
	cTumor* tumor9 = new cTumor(pulmon, pequenio, 20.0, 60.0, 2.0, 3, radio1, 1);
	cTumor* tumor10 = new cTumor(riñon, grande, 10.0, 60.0, 1.0, 4, radio3, 2);
	cTumor* tumor11 = new cTumor(nariz, pequenio, 5.0, 60.0, 5.0, 2, radio1, 0);
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
