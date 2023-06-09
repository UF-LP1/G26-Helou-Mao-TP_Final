#include "cAsistencia.h"

cAsistencia::cAsistencia(time_t turno, bool asist)
{
	this->aUltTurno = turno;
	this->aAsistencia = asist;
}
cAsistencia:: ~cAsistencia()
{

}
time_t cAsistencia::GET_TURNO()
{
	return this->aUltTurno;
}
bool cAsistencia::GET_ASISTENCIA()
{
	return this->aAsistencia;
}