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

cPaciente cHospital::buscar_pacienprotesis(cPiezaOrtopedica pieza)
{
	for (int i = 0; i < medicos.size(); i++) {
		vector<cPaciente> listapacientes = medicos[i].get_listapac();
		for (int j = 0; j < listapacientes.size(); j++)
		{
			if (listapacientes[j].get_cod() == pieza.get_cod())
				return listapacientes[j];
		}
	}
}
