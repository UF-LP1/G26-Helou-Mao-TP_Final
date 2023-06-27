#pragma once
#include "cTumor.h"
class cListaTumores :
    public list<cTumor*>
{
public:
	void operator+(cTumor& tumor);
	cTumor* operator[](unsigned int pos);
	void operator-(cTumor* tumor);
	friend ostream& operator<<(ostream& out, cListaTumores& lista);
};

