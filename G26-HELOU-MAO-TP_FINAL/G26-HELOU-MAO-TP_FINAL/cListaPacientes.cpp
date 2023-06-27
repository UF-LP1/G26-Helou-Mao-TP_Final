#include "cListaPacientes.h"

ostream& operator<<(ostream& out, cListaPacientes lista)
{
    for (cPaciente* pac : lista)
    {
        out << *pac;
    }
    return out;
}

void cListaPacientes::operator+(cPaciente *pac)
{
    this->push_back(pac);
}
cPaciente* cListaPacientes:: operator[](unsigned int pos)
{
    if (pos > this->size())
    {
        throw new exception("no se encontro el elemento que desea buscar");
    }
    int cont = 0;
    auto it = this->begin();
    while (cont < pos)
    {
        cont++;
        it++;
    }
    return *it;
}