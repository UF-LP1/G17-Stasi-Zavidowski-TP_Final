#include "cPiezaQui.h"

cPiezaQui::cPiezaQui(float dimensiones_, materiales tipomaterial_, time_t fechafabricacion_, Tipodepieza tipopieza_, int codprotesis_, string tipoprotesis_) : cPiezaOrtopedica(dimensiones_, tipomaterial_, fechafabricacion_, tipopieza_, codprotesis_)
{
	this->tipoprotesis = tipoprotesis;
}

cPiezaQui::~cPiezaQui()
{
}
string cPiezaQui::to_string()
{
	stringstream salida;

	tm* ffabricacion = new tm;
	localtime_s(ffabricacion, &this->fechafabricacion);

	salida << "Las dimensiones son:" << this->dimensiones << "Fecha de fabricacion:" << ffabricacion->tm_mday << "/" << ffabricacion->tm_mon + 1 << "/" << ffabricacion->tm_year + 1900 << "El tipo de pieza es:" << this->tipopieza << "El codigo de la protesis es:" << this->codprotesis << "El tipo de protesis es:"<<this->tipoprotesis<< endl;
	
	delete ffabricacion;

	return salida.str();
}
void cPiezaQui::imprimir()
{
	cout << this->to_string() << endl;
}