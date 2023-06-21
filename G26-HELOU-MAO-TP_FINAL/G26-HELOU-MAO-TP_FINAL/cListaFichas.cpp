#include "cListaFichas.h"
cFicha* cListaFichas::operator[](cPaciente* pac)
{
	cFicha* retorno = nullptr;
	for (cFicha *ficha : *this)
	{
		if (ficha->GET_PAC() == pac)
		{
			retorno = ficha;
		}
	}
	return retorno;


}
cFicha* cListaFichas::operator[](unsigned int pos)
{
	if (pos >= this->size())
		throw new exception("Error tamanyo");

	int cont = 0;
	auto it = this->begin();
	while (cont < pos){
		cont++;
		it++;
	}

	return *it;
}

void cListaFichas::operator+(cFicha* ficha)
{
	this->push_back(ficha);
}
