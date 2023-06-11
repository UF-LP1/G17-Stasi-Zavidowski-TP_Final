#include "cRegistrosANPA.h"

cRegistrosANPA::cRegistrosANPA(cHospital hosp_, cMedico med_, time_t fechasolicitada_, time_t fechaestimativa_, time_t fechaentrega_, cPiezaOrtopedica piezaort_, cPaciente pacien_): hosp(hosp_), med(med_), piezaort(piezaort_), pacien(pacien_)
{
	this->fechaentrega = fechaentrega_;
	this->fechaestimativa = fechaestimativa_;
	this->fechasolicitada = fechasolicitada_;
}

cRegistrosANPA::~cRegistrosANPA()
{
}

string cRegistrosANPA::to_string()
{
	return string();
}

void cRegistrosANPA::imprimir()
{
}
