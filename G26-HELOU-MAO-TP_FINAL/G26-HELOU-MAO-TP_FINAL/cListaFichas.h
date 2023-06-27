#pragma once
#include <list>
#include "cFicha.h"
class cListaFichas:public list<cFicha*>
{
public:
	friend ostream& operator<<(ostream& out, cListaFichas lista);

	cFicha* operator[](cPaciente* pac);
	void operator+(cFicha& ficha);
	cFicha* operator[](unsigned int pos);
};

