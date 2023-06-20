#include "cOrtopedia.h"
#include "cVector.hpp"

int cOrtopedia::stock = 0;
cOrtopedia::cOrtopedia(string nombre_, string direccion_, cVector<cPiezaOrtopedica> ListaProtesis): nombre(nombre_), direcion(direccion_)
{
	this->ListaProtesis = ListaProtesis;
}

cOrtopedia::~cOrtopedia()
{
}

string cOrtopedia::get_nombre()
{
	return string();
}

string cOrtopedia::get_direccion()
{
	return string();
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
