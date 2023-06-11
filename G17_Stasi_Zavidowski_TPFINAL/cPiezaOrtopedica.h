#pragma once
#include "../materiales.h"
#include "../Tipodepieza.h"
#include "cFabricante.h"
class cPiezaOrtopedica
{
public:
	cPiezaOrtopedica(float dimensiones_, materiales tipomaterial_, time_t fechafabricacion_, cFabricante fabricante_, Tipodepieza tipopieza_, int codprotesis_);
	~cPiezaOrtopedica();

	float get_dimensiones();
	time_t get_fechafabricacion();
    string to_string();
	void imprimir();
	int get_cod();

protected:
	float dimensiones;
	materiales tipomaterial;
	time_t fechafabricacion;
	cFabricante fabricante;
	Tipodepieza tipopieza;
	int codprotesis;
};

