#pragma once
#include "cRegistrosANPA.h"
#include "cOrtopedia.h"
#include "cHospital.h"
#include "cPaciente.h"
#include "cVector.hpp"
class cANPA
{
public:
	cANPA(cVector <cRegistrosANPA> listaregistros_, cVector <cOrtopedia> listaortopedia_, cVector <cHospital> listahospitales_, cVector <cPaciente> listapacientes_);
	~cANPA();
	

	string to_string();
	void imprimir();
	//cPaciente buscar_pacienprotesis(cPaciente p, cPiezaOrtopedica pieza);
	void agregarpaciente(cPaciente paciente);
	cPiezaOrtopedica buscar_protesis(cPiezaOrtopedica pieza, int codprotesis);
	void asignar();

private:
	cVector <cRegistrosANPA> listaregistros;
	cVector <cOrtopedia> listaortopedia;
	cVector <cHospital> listahospitales;
	cVector <cPaciente> listapacientes;

};

