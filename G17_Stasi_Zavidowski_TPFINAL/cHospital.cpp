#include "cHospital.h"

cHospital::cHospital(string nombre_, string direccion_, string espcialidad_, vector<cMedico> medicos_): nombre(nombre_), direccion(direccion_), medicos(medicos_)
{
	this->especialidad = espcialidad_;
}

cHospital::~cHospital()
{
}

string cHospital::get_nombre()
{
	return string();
}

string cHospital::get_direccion()
{
	return string();
}

string cHospital::get_especialidad()
{
	return string();
}


string cHospital::to_string()
{
	return string();
}

void cHospital::imprimir()
{
}

cPaciente cHospital::buscar_pacienprotesis(cPaciente p, cPiezaOrtopedica pieza)
{
	
}
