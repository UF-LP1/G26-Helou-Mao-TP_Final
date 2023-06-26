#include "pch.h"
#include "CppUnitTest.h"
#include <CppUnitTestAssert.h>
#include "..\G26-HELOU-MAO-TP_FINAL\cCentro.h"
using namespace std;
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(centro)
	{
	public:
		TEST_METHOD(buscarOncologo)
		{
			cOncologo auxOnc("saul", "lezama");
			cOncologo auxOnc1("julian", "alvarez");
			cOncologo auxOnc2("pity", "martinez");
			cOncologo auxOnc3("leo", "messi");
			cOncologo auxOnc4("lionel", "scaloni");
			cOncologo auxOnc5("valen", "mao");
			cDosimetrista auxDos("martu", "hansel");
			list<cMedico*> listaMed;
			listaMed.push_back(&auxDos);
			listaMed.push_back(&auxOnc);
			listaMed.push_back(&auxOnc1);
			listaMed.push_back(&auxOnc2);
			listaMed.push_back(&auxOnc3);
			listaMed.push_back(&auxOnc4);
			listaMed.push_back(&auxOnc5);
			cCentro aux("iuju", "jorojo", listaMed);
			cOncologo* Aux = aux.buscarOncologo(2);

			ASSERT_THAT(Aux, auxOnc2);

		}
	};
	/*TEST_CLASS(centro)
	{
	public:

		TEST_METHOD(crearFicha)
		{
			cOncologo auxOnc("saul", "lezama");
			cDosimetrista auxDos("martu", "hansel");
			list<cMedico*> listaMed;
			listaMed.push_back(&auxDos);
			listaMed.push_back(&auxOnc);
			cPaciente auxPac("valentina", "mao", "456788", "234567", "7/6/2004", 'F', "0+", 50.0);
			cCentro centroAux("Mater Dei", "Salguero y Alcorta", listaMed);
			centroAux.crearFicha(&auxPac);
			cAsistencia asist;
		};
		
	};*/

}

