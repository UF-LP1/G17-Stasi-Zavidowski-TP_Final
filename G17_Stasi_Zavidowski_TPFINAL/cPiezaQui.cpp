#include "cPiezaQui.h"

cPiezaQui::cPiezaQui(float dimensiones_, materiales tipomaterial_, time_t fechafabricacion_, cFabricante fabricante_, Tipodepieza tipopieza_, int codprotesis_, string tipoprotesis_) : cPiezaOrtopedica(dimensiones_, tipomaterial_, fechafabricacion_, fabricante_, tipopieza_, codprotesis_)
{
	this->tipoprotesis = tipoprotesis;
}

cPiezaQui::~cPiezaQui()
{
}
