#include "cPiezaOrtopedica.h"
cPiezaOrtopedica::cPiezaOrtopedica(float dimensiones_, materiales tipomaterial_, time_t fechafabricacion_, Tipodepieza tipopieza_, int codprotesis_)
{
	this->dimensiones = dimensiones_;
	this->tipomaterial = tipomaterial_;
	this->fechafabricacion = fechafabricacion_;
	this->tipopieza = tipopieza_;
	this->codprotesis = codprotesis_;

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
	return tipomaterial;
}

Tipodepieza cPiezaOrtopedica::get_tipo()
{
	return tipopieza;
}

string cPiezaOrtopedica::to_string()
{
	stringstream salida;

	tm* ffabricacion = new tm;
	localtime_s(ffabricacion, &this->fechafabricacion);

	salida << "Las dimensiones son:" << this->dimensiones << "Fecha de fabricacion:" << ffabricacion->tm_mday << "/" << ffabricacion->tm_mon + 1 << "/" << ffabricacion->tm_year + 1900 << "El tipo de pieza es:" << this->tipopieza << "El codigo de la protesis es:" << this->codprotesis << endl;

	delete ffabricacion;

	return salida.str();
}

void cPiezaOrtopedica::imprimir()
{ 
	cout << this->to_string();

}

int cPiezaOrtopedica::get_cod()
{
	return codprotesis;
}

