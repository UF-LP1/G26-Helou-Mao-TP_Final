#pragma once
class cTratamiento {
private:
	float aDosisXSesion;
	float aDosisTotal;
public:
	cTratamiento(float, float);
	~cTratamiento();
	cTratamiento& operator=(cTratamiento& otro);
};