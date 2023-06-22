#pragma once
#include "cTumor.h"
class cListaTumores :
    public list<cTumor*>
{
public:
	void operator+(cTumor* tumor);
	cTumor* operator[](unsigned int pos);

};

