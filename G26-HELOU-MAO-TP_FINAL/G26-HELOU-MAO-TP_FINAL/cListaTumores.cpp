#include "cListaTumores.h"
cTumor* cListaTumores::operator[](unsigned int pos)
{
	if (pos >= this->size())
		throw new exception("Error tamanyo");

	int cont = 0;
	cTumor* retorno = nullptr;
	for (cTumor* tumor : *this)
	{
		if (cont == pos)
			retorno = tumor;
		cont++;
	}
	return retorno;
}

void cListaTumores::operator-(cTumor* tumor)
{
	this->remove(tumor);
}

void cListaTumores::operator+(cTumor &tumor)
{
	this->push_back(&tumor);
}

ostream& operator<<(ostream& out, cListaTumores& lista)
{
	
	for (cTumor* tumorcito : lista)
	{
		out << *tumorcito;
	}
	return out;
}
