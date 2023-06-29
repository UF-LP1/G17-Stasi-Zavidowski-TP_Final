#pragma once
#include <string>
#include "cVector.hpp"
#include  "cPiezaOrtopedica.h"
#include "cPiezaNoQui.h"
#include "cPiezaQui.h"
using namespace std;

class cFabricante
{
public:
	cFabricante(string nombre_,string direccion_, int numhabilitacion_);
	~cFabricante();

	string get_nombre();
	string get_direccion();
	int get_numhabilitaion();
	cVector<cPiezaOrtopedica*> get_listaprotesisrealizadas();
	void solicitudes(string requisitos);
	string to_string();
	void imprimir();

	void mostrarInformacion();

private:
	const string nombre;
	string direccion;
	int numhabilitacion;
	 cVector <cPiezaOrtopedica*> Listaprotesisfabricadas;

};

