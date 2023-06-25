#include "cPiezaNoQui.h"

cPiezaNoQui::cPiezaNoQui(float dimensiones_, materiales tipomaterial_, time_t fechafabricacion_, Tipodepieza tipopieza_, int codprotesis_, float radiomiembro_): cPiezaOrtopedica(dimensiones_, tipomaterial_, fechafabricacion_, tipopieza_, codprotesis_)
{
	this->radiomiembro = radiomiembro_;
}

cPiezaNoQui::~cPiezaNoQui()
{
}
