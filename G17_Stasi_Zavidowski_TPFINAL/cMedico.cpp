#include "cMedico.h"

cMedico::cMedico(string nombre_, string apellido_, string matricula_): nombre(nombre_), apellido(apellido_)
{
	this->matricula = matricula_;
}

cMedico::~cMedico()
{
}

string cMedico::get_nombre()
{
	return string();
}

string cMedico::get_apellido()
{
	return string();
}

string cMedico::get_matricula()
{
	return string();
}

void cMedico::autorizar(string)
{
}

string cMedico::to_string()
{
	return string();
}

void cMedico::imprimir()
{
}
