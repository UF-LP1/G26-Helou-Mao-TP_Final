#pragma once
#include "cPaciente.h"
class cListaPacientes :
    public list<cPaciente*>
{
public:
    friend ostream& operator<<(ostream& out, cListaPacientes lista);

};

