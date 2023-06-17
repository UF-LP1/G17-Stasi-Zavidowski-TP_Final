#pragma once
#include <string>
#include <vector>
#include "cPaciente.h"
#include "cOrtopedia.h"
#include "cANPA.h"
using namespace std;
class cMedico
{
public:
	cMedico(string nombre_, string apellido_, string matricula_, vector <cPaciente> listapacientes_, vector <cOrtopedia> listaconvenio_);
	~cMedico();

	string get_nombre();
	string get_apellido();
	string get_matricula();
	string to_string();
	void imprimir();
	cPiezaOrtopedica buscarprotesis();
	cPiezaOrtopedica llamarANPA(cVector <cOrtopedia> lista);

private:
	const string nombre;
	const string apellido;
	string matricula;
	vector <cPaciente> listapacientes;
    vector <cOrtopedia> listaconvenio;

};

