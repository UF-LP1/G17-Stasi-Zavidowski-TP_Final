#include "cFabricante.h"

cFabricante::cFabricante(string nombre_, string direccion_, int numhabilitacion_): nombre(nombre_), numhabilitacion(numhabilitacion_)
{
	this->direccion = direccion_;
}

cFabricante::~cFabricante()
{
}

string cFabricante::get_nombre()
{
	return string();
}

string cFabricante::get_direccion()
{
	return string();
}

int cFabricante::get_numhabilitaion()
{
	return 0;
}

void cFabricante::solicitudes(string requisitos)
{
}

string cFabricante::to_string()
{
	return string();
}

void cFabricante::imprimir()
{
}
