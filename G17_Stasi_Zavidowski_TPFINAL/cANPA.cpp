#include "cANPA.h"
 cVector <cOrtopedia> cANPA::listatodasortopedias;
 cVector <cFabricante> cANPA::listafabricantes;

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
	cout << this->to_string() << endl;
}

cVector<cOrtopedia>& cANPA::get_listatodasortopedias() //& para que retorne la referencia al objeto y que no lo copie
{
	return listatodasortopedias;
}

cVector<cFabricante>& cANPA::get_listafabricantes()
{
	return listafabricantes;
}

