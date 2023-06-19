#pragma once
#include <string>
#include <vector>
#include "cPaciente.h"
#include "cOrtopedia.h"
#include "cANPA.h"
#include "cFabricante.h"
using namespace std;
class cMedico
{
public:
	cMedico(string nombre_, string apellido_, string matricula_, vector <cPaciente> listapacientes_, vector <cOrtopedia> listaconvenio_);
	~cMedico();

	string get_nombre();
	string get_apellido();
	string get_matricula();
	vector<cPaciente>& get_listapac();
	string to_string();
	void imprimir();
	cPiezaOrtopedica buscarprotesis();
	cPiezaOrtopedica llamarANPA(std::vector <cOrtopedia> lista);

	cPiezaOrtopedica llamarfabricante(std::vector<cFabricante> listafabricantes);

private:
	const string nombre;
	const string apellido;
	string matricula;
	std::vector <cPaciente> listapacientes;
    std::vector <cOrtopedia> listaconvenio;

};

