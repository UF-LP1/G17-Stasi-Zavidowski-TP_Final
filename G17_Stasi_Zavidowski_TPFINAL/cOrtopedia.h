#pragma once
#include <string>
#include "cPiezaOrtopedica.h"
#include "cVector.hpp"
#include <sstream>
using namespace std;
class cOrtopedia
{
public:
	cOrtopedia(string nombre_, string direccion_, cVector<cPiezaOrtopedica> ListaProtesis );
	~cOrtopedia();

	string get_nombre();
	string get_direccion();
	vector<cPiezaOrtopedica>& get_listaprotesis();
	static int get_stock_total_disponible();
	static void restarStock();
	string to_string();
	void imprimir();
	void agregarProtesis(cPiezaOrtopedica protesis);

private:
	const string nombre;
	const string direcion;
	static int stock;
	cVector <cPiezaOrtopedica> ListaProtesis;



};
