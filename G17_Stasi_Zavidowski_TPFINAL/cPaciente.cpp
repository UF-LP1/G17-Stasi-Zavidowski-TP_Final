#include "cPaciente.h"

cPaciente::cPaciente(string nombre_, string apellido_, string Fnacimiento, string telefono, enum materiales alergias, float RadioMiembroAmp, int codigoprotesis_): nombre(nombre_), apellido(apellido_), Fnacimiento(Fnacimiento), alergias(alergias)
{
	this->telefono = telefono;
	this->RadioMiembroAmp = RadioMiembroAmp;
	this->codigoprotesis = 0;


}

cPaciente::~cPaciente()
{
}

string cPaciente::get_nombre()
{
	return string();
}

string cPaciente::get_apellido()
{
	return string();
}

time_t cPaciente::get_fnacimiento()
{
	return time_t();
}

string cPaciente::get_telefono()
{
	return string();
}

float cPaciente::get_radiomiembroamp()
{
	return 0.0f;
}

materiales cPaciente::get_alergias()
{
	return materiales();
}

string cPaciente::to_string()
{
	return string();
}

void cPaciente::imprimir()
{
}

int cPaciente::get_codigo()
{
	return codigoprotesis;
}

void cPaciente::set_codigo(int cod)
{
}
