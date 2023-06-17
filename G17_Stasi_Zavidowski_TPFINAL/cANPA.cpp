#include "cANPA.h"


cANPA::cANPA(cVector<cRegistrosANPA> listaregistros_): listaregistros(listaregistros_)
{
}

cANPA::~cANPA()
{
}

string cANPA::to_string()
{
	return string();
}

void cANPA::imprimir()
{
}

cVector<cOrtopedia>& cANPA::get_listatodasortopedias() //& para que retorne la referencia al objeto y que no lo copie
{
	return listatodasortopedias;
}

