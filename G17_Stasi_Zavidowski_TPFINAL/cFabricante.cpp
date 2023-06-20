#include "cFabricante.h"

cFabricante::cFabricante(string nombre_, string direccion_, int numhabilitacion_): nombre(nombre_), numhabilitacion(numhabilitacion_)
{
	this->direccion = direccion_;
}

cFabricante::cFabricante()
{

}

cFabricante::~cFabricante()
{
}

string cFabricante::get_nombre()
{
	return string();
}

string cFabricante::get_direccion()
{
	return string();
}

int cFabricante::get_numhabilitaion()
{
	return 0;
}

cVector <cPiezaOrtopedica>& cFabricante::get_listaprotesisrealizadas()
{
	return Listaprotesisfabricadas;
}

void cFabricante::solicitudes(string requisitos)
{
}

string cFabricante::to_string()
{
	stringstream salida;
	char coma = ',';
	salida << "Nombre:"<<this->nombre<<coma<<"direccion:"<<this->direccion<<coma << "El numero de habilitacion es:" << this->numhabilitacion << endl;
	return salida.str();
}

void cFabricante::imprimir()
{
	cout << this->to_string() << endl;
}
