#include "cPaciente.h"

cPaciente::cPaciente(string nombre_, string apellido_, string Fnacimiento, string telefono, string alergias, cHospital hospital, float RadioMiembroAmp, int codigopaciente_): nombre(nombre_), apellido(apellido_), Fnacimiento(Fnacimiento), hospital(hospital), codigopaciente(codigopaciente_)
{
	this->telefono = telefono;
	this->alergias = alergias;
	this->RadioMiembroAmp = RadioMiembroAmp;

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

string cPaciente::to_string()
{
	return string();
}

void cPaciente::imprimir()
{
}

int cPaciente::get_codigo()
{
	return 0;
}
