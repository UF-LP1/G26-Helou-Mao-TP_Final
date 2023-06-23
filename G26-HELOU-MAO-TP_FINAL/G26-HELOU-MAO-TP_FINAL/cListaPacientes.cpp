#include "cListaPacientes.h"

ostream& operator<<(ostream& out, cListaPacientes lista)
{
    for (cPaciente* pac : lista)
    {
        out << pac;
    }
    return out;
}

void cListaPacientes::operator+(cPaciente* pac)
{
    this->push_back(pac);
}
