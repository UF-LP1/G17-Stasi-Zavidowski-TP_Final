#include "cHospital.h"

cHospital::cHospital(string nombre_, string direccion_, string espcialidad_, cVector<cMedico> medicos_): nombre(nombre_), direccion(direccion_), medicos(medicos_)
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
	stringstream salida;
	char coma = ',';
	salida <<"Nombre:"<<this->nombre<<coma<< "direccion:"<<this->direccion<<coma << "La espacialidad es:" << this->especialidad << endl;

	return salida.str();
}

void cHospital::imprimir()
{
}


cPaciente* cHospital::buscar_pacienprotesis(int codigoprotesis)
{
	for (int i = 0; i < medicos.size(); i++) {
		vector<cPaciente> listapacientes = medicos[i].get_listapac();
		for (int j = 0; j < listapacientes.size(); j++)
		{
			if (listapacientes[j].get_cod() == codigoprotesis)
				return &listapacientes[j];
		}
	}
	return nullptr;
}
