#include "cPiezaNoQui.h"


cPiezaNoQui::cPiezaNoQui(float dimensiones_, materiales tipomaterial_, time_t fechafabricacion_, Tipodepieza tipopieza_, int codprotesis_, float radiomiembro_): cPiezaOrtopedica(dimensiones_, tipomaterial_, fechafabricacion_, tipopieza_, codprotesis_)
{
	this->radiomiembro = radiomiembro_;
}

cPiezaNoQui::~cPiezaNoQui()
{
}
string cPiezaNoQui::to_string()
{
	stringstream salida;

	tm* ffabricacion = new tm;
	localtime_s(ffabricacion, &this->fechafabricacion);

	salida << "Las dimensiones son:" << this->dimensiones << "Fecha de fabricacion:" << ffabricacion->tm_mday << "/" << ffabricacion->tm_mon + 1 << "/" << ffabricacion->tm_year + 1900 << "El tipo de pieza es:" << this->tipopieza << "El codigo de la protesis es:" << this->codprotesis << "El radio del miembro amputado es:" << this->radiomiembro << endl;

	delete ffabricacion;

	return salida.str();
}
void cPiezaNoQui::imprimir()
{
	cout << this->to_string() << endl;
}