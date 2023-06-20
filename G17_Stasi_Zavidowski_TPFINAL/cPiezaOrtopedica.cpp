#include "cPiezaOrtopedica.h"
cPiezaOrtopedica::cPiezaOrtopedica(float dimensiones_, materiales tipomaterial_, time_t fechafabricacion_, cFabricante fabricante_, Tipodepieza tipopieza_, int codprotesis_): fabricante(fabricante_)
{
	this->dimensiones = dimensiones_;
	this->tipomaterial = tipomaterial_;
	this->fechafabricacion = fechafabricacion_;
	this->tipopieza = tipopieza_;
	this->codprotesis = codprotesis_;

}

cPiezaOrtopedica::cPiezaOrtopedica()
{
}

cPiezaOrtopedica::~cPiezaOrtopedica()
{
}

float cPiezaOrtopedica::get_dimensiones()
{
	return dimensiones;
}

time_t cPiezaOrtopedica::get_fechafabricacion()
{
	return fechafabricacion;
}

materiales cPiezaOrtopedica::get_tipomaterial()
{
	return tipomaterial();
}

string cPiezaOrtopedica::to_string()
{
	stringstream salida;

	tm* ffabricacion = new tm;
	localtime_s(ffabricacion, &this->fechafabricacion);

	salida << "Las dimensiones son:" << this->dimensiones << endl;
	salida << "Fecha de fabricacion:" << ffabricacion->tm_mday << "/" << ffabricacion->tm_mon + 1 << "/" << ffabricacion->tm_year + 1900 << endl;
	salida << "El tipo de pieza es:" << this->tipopieza << endl;
	salida << "El codigo de la protesis es:" << this->codprotesis << endl;
	delete ffabricacion;

	return string();
}

void cPiezaOrtopedica::imprimir()
{
}

int cPiezaOrtopedica::get_cod()
{
	return codprotesis;
}

