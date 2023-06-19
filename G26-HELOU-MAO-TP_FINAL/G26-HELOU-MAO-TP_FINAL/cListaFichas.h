#pragma once
#include <list>
#include "cFicha.h"
class cListaFichas:public list<cFicha*>
{
public:
	cFicha* operator[](cPaciente* pac);
	void operator+(cFicha* ficha);
};

