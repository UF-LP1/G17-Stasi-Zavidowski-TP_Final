#include "cPiezaNoQui.h"

cPiezaNoQui::cPiezaNoQui(float dimensiones_, materiales tipomaterial_, time_t fechafabricacion_, cFabricante fabricante_, Tipodepieza tipopieza_, int codprotesis_, float radiomiembro_): cPiezaOrtopedica(dimensiones_, tipomaterial_, fechafabricacion_, fabricante_, tipopieza_, codprotesis_)
{
	this->radiomiembro = radiomiembro_;
}

cPiezaNoQui::~cPiezaNoQui()
{
}
