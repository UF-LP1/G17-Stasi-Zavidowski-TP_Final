#pragma once
#include <string>
#include "cPiezaOrtopedica.h"
#include "cVector.hpp"
using namespace std;
class cOrtopedia
{
public:
	cOrtopedia(string nombre_, string direccion_, int stock_, cVector<cPiezaOrtopedica> ListaProtesis );
	~cOrtopedia();

	string get_nombre();
	string get_direccion();
	string to_string();
	void imprimir();

private:
	const string nombre;
	const string direcion;
	int stock;
	cVector <cPiezaOrtopedica> ListaProtesis;



};
