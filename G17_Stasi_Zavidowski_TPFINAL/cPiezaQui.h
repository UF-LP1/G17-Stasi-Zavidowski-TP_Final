#pragma once
#include "cPiezaOrtopedica.h"
class cPiezaQui: public cPiezaOrtopedica
{
public:
	cPiezaQui(float dimensiones_, materiales tipomaterial_, time_t fechafabricacion_, cFabricante fabricante_, Tipodepieza tipopieza_, int codprotesis_, string tipoprotesis_);
	~cPiezaQui();

private:
	string tipoprotesis;
};

