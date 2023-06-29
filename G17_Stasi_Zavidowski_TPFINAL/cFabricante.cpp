#include "cFabricante.h"

cFabricante::cFabricante(string nombre_, string direccion_, int numhabilitacion_): nombre(nombre_), numhabilitacion(numhabilitacion_)
{
	this->direccion = direccion_;
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

cVector <cPiezaOrtopedica*> cFabricante::get_listaprotesisrealizadas()
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

void cFabricante::mostrarInformacion()
{
	for (int i = 0; i < Listaprotesisfabricadas.size(); i++) {
		cPiezaOrtopedica* protesis = Listaprotesisfabricadas[i];

		cPiezaQui* protesisQuirurgica = dynamic_cast<cPiezaQui*>(protesis);
		if (protesisQuirurgica != nullptr) {
			// La prótesis es de tipo cPiezaOrtopedicaQuirurgica
			protesisQuirurgica->imprimir();
		}

		cPiezaNoQui* protesisNoQuirurgica = dynamic_cast<cPiezaNoQui*>(protesis);
		if (protesisNoQuirurgica != nullptr) {
			// La prótesis es de tipo cPiezaOrtopedicaNoQuirurgica
			protesisNoQuirurgica->imprimir();
		}
	}
}
