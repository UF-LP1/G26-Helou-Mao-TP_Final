#include "cListaTumores.h"
cTumor* cListaTumores::operator[](unsigned int pos)
{
	if (pos >= this->size())
		throw new exception("Error tamanyo");

	int cont = 0;
	auto it = this->begin();
	while (cont < pos) {
		cont++;
		it++;
	}

	return *it;
}

void cListaTumores::operator+(cTumor* tumor)
{
	this->push_back(tumor);
}
