#pragma once
#include "cRegistrosANPA.h"
#include "cVector.hpp"
#include "cFabricante.h"
#include <vector>
class cMedico;
using namespace std;
class cANPA
{
public:
	cANPA(cVector <cRegistrosANPA> listaregistros_);
	~cANPA();
	static cVector <cOrtopedia> listatodasortopedias;
	static cVector <cFabricante> listafabricantes;
	string to_string();
	void imprimir();
	static cVector<cOrtopedia>& get_listatodasortopedias();
	static cVector<cFabricante>& get_listafabricantes();

private:
	cVector <cRegistrosANPA> listaregistros;
};

