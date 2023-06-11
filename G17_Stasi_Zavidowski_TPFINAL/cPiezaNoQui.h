#pragma once
#include "cPiezaOrtopedica.h"
class cPiezaNoQui: public cPiezaOrtopedica
{
public:
	cPiezaNoQui(float dimensiones_, materiales tipomaterial_, time_t fechafabricacion_, cFabricante fabricante_, Tipodepieza tipopieza_, float radiomiembro_);
	~cPiezaNoQui();


private:
	float radiomiembro;

};

