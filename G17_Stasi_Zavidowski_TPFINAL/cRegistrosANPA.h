#pragma once
#include "cHospital.h"
#include "cMedico.h"
#include "cPiezaOrtopedica.h"
#include <sstream>
class cRegistrosANPA
{
public:
	cRegistrosANPA(cHospital hosp_, cMedico med_, time_t fechasolicitada_, time_t fechaestimativa_, time_t fechaentrega_, string piezaort_, cPaciente pacien_);
	~cRegistrosANPA();
	
	string to_string();
	void imprimir();
private:
	cHospital hosp;
	cMedico  med;
	time_t fechasolicitada;
	time_t fechaestimativa;
	time_t fechaentrega;
	string piezaort;
	cPaciente pacien;

};

