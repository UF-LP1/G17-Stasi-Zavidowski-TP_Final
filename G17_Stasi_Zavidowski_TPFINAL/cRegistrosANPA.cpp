#include "cRegistrosANPA.h"

cRegistrosANPA::cRegistrosANPA(cHospital hosp_, cMedico med_, time_t fechasolicitada_, time_t fechaestimativa_, time_t fechaentrega_, string piezaort_, cPaciente pacien_): hosp(hosp_), med(med_), piezaort(piezaort_), pacien(pacien_)
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
	stringstream salida;
	tm* fentrega = new tm;
	localtime_s(fentrega, &this->fechaentrega);

	tm* festimativa = new tm;
	localtime_s(festimativa, &this->fechaestimativa);

	tm* fsolicitada = new tm;
	localtime_s(fsolicitada, &this->fechasolicitada);
	char coma = ',';

	salida << "Fecha de entrega:" << fentrega->tm_mday << "/" << fentrega->tm_mon + 1 << "/" << fentrega->tm_year + 1900 << coma << "Fecha de estimativa:" << festimativa->tm_mday << "/" << festimativa->tm_mon + 1 << "/" << festimativa->tm_year + 1900 << coma << "Fecha de solicitada:" << fsolicitada->tm_mday << "/" << fsolicitada->tm_mon + 1 << "/" << fsolicitada->tm_year + 1900 << endl;
	delete fentrega;
	delete festimativa;
	delete fsolicitada;
	return salida.str();
}

void cRegistrosANPA::imprimir()
{
}
