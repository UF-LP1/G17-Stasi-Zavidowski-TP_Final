#pragma once
#include "../materiales.h"
#include "../Tipodepieza.h"
#include <sstream>
class cFabricante;
using namespace std;
class cPiezaOrtopedica
{
public:
	cPiezaOrtopedica(float dimensiones_, materiales tipomaterial_, time_t fechafabricacion_, Tipodepieza tipopieza_, int codprotesis_);
	~cPiezaOrtopedica();

	float get_dimensiones();
	time_t get_fechafabricacion();
	materiales get_tipomaterial();
	Tipodepieza get_tipo();
    string to_string();
	void imprimir();
	int get_cod();

protected:
	float dimensiones;
	materiales tipomaterial;
	time_t fechafabricacion;
	Tipodepieza tipopieza;
	int codprotesis;

};

