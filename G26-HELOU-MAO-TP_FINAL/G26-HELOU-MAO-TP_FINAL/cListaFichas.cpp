#include "cListaFichas.h"
cFicha* cListaFichas::operator[](cPaciente* pac)
{
	cFicha* retorno = new cFicha;
	for (cFicha *ficha : *this)
	{
		if (ficha->GET_PAC() == pac)
		{
			retorno = ficha;
		}
	}
	return retorno;

}

void cListaFichas::operator+(cFicha* ficha)
{
	this->push_back(ficha);
}
