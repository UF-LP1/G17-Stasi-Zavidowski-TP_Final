#pragma once
#include <string>
#include "cPiezaOrtopedica.h"
#include "cVector.hpp"
#include <vector>

using namespace std;
class cFabricante
{
public:
	cFabricante(string nombre_,string direccion_, int numhabilitacion_);
	~cFabricante();

	string get_nombre();
	string get_direccion();
	int get_numhabilitaion();
	static std::vector<cPiezaOrtopedica>& get_listaprotesisrealizadas();
	void solicitudes(string requisitos);
	string to_string();
	void imprimir();

private:
	const string nombre;
	string direccion;
	const int numhabilitacion;
	static std::vector <cPiezaOrtopedica> Listaprotesisfabricadas;

};

