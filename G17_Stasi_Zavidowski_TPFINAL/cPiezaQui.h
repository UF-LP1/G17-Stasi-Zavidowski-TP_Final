#pragma once
#include "cPiezaOrtopedica.h"
class cPiezaQui: public cPiezaOrtopedica
{
public:
	cPiezaQui(float dimensiones_, materiales tipomaterial_, time_t fechafabricacion_, Tipodepieza tipopieza_, int codprotesis_, string tipoprotesis_);
	~cPiezaQui();

	string to_string();

	void imprimir();

private:
	string tipoprotesis;
};

