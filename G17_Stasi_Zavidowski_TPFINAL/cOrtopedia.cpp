#include "cOrtopedia.h"

cOrtopedia::cOrtopedia(string nombre_, string direccion_, int stock_, cVector<cPiezaOrtopedica> ListaProtesis): nombre(nombre_), direcion(direccion_), ListaProtesis(ListaProtesis)
{
	this->stock = stock_;
}

cOrtopedia::~cOrtopedia()
{
}

string cOrtopedia::get_nombre()
{
	return string();
}

string cOrtopedia::get_direccion()
{
	return string();
}

vector<cPiezaOrtopedica>& cOrtopedia::get_listaprotesis()
{
	return this->ListaProtesis;
}

string cOrtopedia::to_string()
{
	return string();
}

void cOrtopedia::imprimir()
{
}
