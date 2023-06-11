#pragma once
#include "cHospital.h"
#include "cMedico.h"
#include "cPiezaOrtopedica.h"
class cRegistrosANPA
{
public:
	cRegistrosANPA(cHospital hosp_, cMedico med_, time_t fechasolicitada_, time_t fechaestimativa_, time_t fechaentrega_, cPiezaOrtopedica piezaort_, cPaciente pacien_);
	~cRegistrosANPA();
	
	string to_string();
	void imprimir();
private:
	cHospital hosp;
	cMedico  med;
	time_t fechasolicitada;
	time_t fechaestimativa;
	time_t fechaentrega;
	cPiezaOrtopedica piezaort;
	cPaciente pacien;

};

