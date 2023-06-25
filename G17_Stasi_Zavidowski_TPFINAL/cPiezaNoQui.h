#pragma once
#include "cPiezaOrtopedica.h"
class cPiezaNoQui: public cPiezaOrtopedica
{
public:
	cPiezaNoQui(float dimensiones_, materiales tipomaterial_, time_t fechafabricacion_, Tipodepieza tipopieza_, int codprotesis_, float radiomiembro_);
	~cPiezaNoQui();


private:
	float radiomiembro;

};

