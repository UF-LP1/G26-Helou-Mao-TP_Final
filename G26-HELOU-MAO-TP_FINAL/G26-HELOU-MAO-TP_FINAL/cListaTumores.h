#pragma once
#include "cTumor.h"
class cListaTumores :
    public list<cTumor*>
{
public:
	//cTumor* operator[](* pac);
	void operator+(cTumor* tumor);
	cTumor* operator[](unsigned int pos);

};

