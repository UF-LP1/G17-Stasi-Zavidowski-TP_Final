#pragma once
#include "cRegistrosANPA.h"
#include "cOrtopedia.h"
#include "cHospital.h"
#include "cPaciente.h"
#include "cVector.hpp"
#include <vector>
class cANPA
{
public:
	cANPA(cVector <cRegistrosANPA> listaregistros_);
	~cANPA();

	cPiezaOrtopedica buscar_protesis(cPiezaOrtopedica pieza, int codprotesis);
	cPaciente buscar_pacienprotesis(cPiezaOrtopedica pieza);
	string to_string();
	void imprimir();
	cVector<cOrtopedia>& get_listatodasortopedias();

private:
	cVector <cRegistrosANPA> listaregistros;
	cVector <cOrtopedia> listatodasortopedias;

};

