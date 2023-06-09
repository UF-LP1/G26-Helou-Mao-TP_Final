#pragma once
#include "cTratamiento.h"
#include "eAtomo.h"
class cBraquiterapia : public cTratamiento{
private:
	eAtomo aAtomoRadioactivo;
public:
	cBraquiterapia(float, float, eAtomo);
	~cBraquiterapia();
	eAtomo GET_ATOMO();
};