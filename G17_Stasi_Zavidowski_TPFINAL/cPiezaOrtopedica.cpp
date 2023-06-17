#include "cPiezaOrtopedica.h"

cPiezaOrtopedica::cPiezaOrtopedica(float dimensiones_, materiales tipomaterial_, time_t fechafabricacion_, cFabricante fabricante_, Tipodepieza tipopieza_, int codprotesis_): fabricante(fabricante_)
{
	this->dimensiones = dimensiones_;
	this->tipomaterial = tipomaterial_;
	this->fechafabricacion = fechafabricacion_;
	this->tipopieza = tipopieza_;
	this->codprotesis = codprotesis_;
}

cPiezaOrtopedica::~cPiezaOrtopedica()
{
}

float cPiezaOrtopedica::get_dimensiones()
{
	return 0.0f;
}

time_t cPiezaOrtopedica::get_fechafabricacion()
{
	return time_t();
}

materiales cPiezaOrtopedica::get_tipomaterial()
{
	return materiales();
}

string cPiezaOrtopedica::to_string()
{
	return string();
}

void cPiezaOrtopedica::imprimir()
{
}

int cPiezaOrtopedica::get_cod()
{
	return 0;
}

