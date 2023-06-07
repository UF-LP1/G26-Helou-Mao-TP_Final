#pragma once
#include "cTratamiento.h"
#include "eAtomo.h"
class cBraquiterapia : public cTratamiento{
private:
	eAtomo aAtomoRadioactivo;
public:
	eAtomo GET_ATOMO();
};