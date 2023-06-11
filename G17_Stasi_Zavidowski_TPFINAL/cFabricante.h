#pragma once
#include <string>
using namespace std;
class cFabricante
{
public:
	cFabricante(string nombre_,string direccion_, int numhabilitacion_);
	~cFabricante();

	string get_nombre();
	string get_direccion();
	int get_numhabilitaion();
	void solicitudes(string requisitos);
	string to_string();
	void imprimir();

private:
	const string nombre;
	string direccion;
	const int numhabilitacion;

};

