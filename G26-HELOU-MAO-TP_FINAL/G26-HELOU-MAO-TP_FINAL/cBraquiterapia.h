#pragma once
#include "cTratamiento.h"
#include "eAtomo.h"
class cBraquiterapia : public cTratamiento{
private:
	eAtomo aAtomoRadioactivo;
public:
	cBraquiterapia( float, eAtomo);
	~cBraquiterapia();
	eAtomo GET_ATOMO();
	cBraquiterapia();

	void DOSIS_X_TUMOR();
	cBraquiterapia& operator=(const cBraquiterapia& trat);
};