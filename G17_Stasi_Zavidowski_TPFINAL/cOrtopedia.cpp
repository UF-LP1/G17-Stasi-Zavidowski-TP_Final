#include "cOrtopedia.h"
#include "cVector.hpp"

int cOrtopedia::stock = 0;
cOrtopedia::cOrtopedia(string nombre_, string direccion_, cVector<cPiezaOrtopedica> ListaProtesis)
{
	this->nombre = nombre_;
	this->direcion = direccion_;
	this->ListaProtesis = ListaProtesis;
}

cOrtopedia::~cOrtopedia()
{
}

string cOrtopedia::get_nombre()
{
	return this->nombre;
}

string cOrtopedia::get_direccion()
{
	return this->direcion;
}

vector<cPiezaOrtopedica>& cOrtopedia::get_listaprotesis()
{
	return this->ListaProtesis;
}


int cOrtopedia::get_stock_total_disponible()
{
	return stock;
}

void cOrtopedia::restarStock()
{
	stock--;
	return; 
}

string cOrtopedia::to_string()
{
	stringstream salida;
	char coma = ',';
	salida<<"Nombre:"<<this->nombre<<coma<<"direccion:"<<this->direcion << "El stock es:" << this->stock << endl;

	return salida.str();
}

void cOrtopedia::imprimir()
{
	cout << this->to_string() << endl;
}
void cOrtopedia::agregarProtesis(cPiezaOrtopedica protesis)
{
	ListaProtesis + protesis;
	stock++;
}
