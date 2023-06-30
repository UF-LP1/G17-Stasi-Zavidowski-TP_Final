#pragma once
#include <string>
#include <vector>
#include "cPaciente.h"
#include "cOrtopedia.h"
#include "cFabricante.h"
using namespace std;
class cMedico
{
public:
	cMedico(string nombre_, string apellido_, string matricula_, cVector <cPaciente> listapacientes_, cVector <cOrtopedia> listaconvenio_);
	cMedico();
	cMedico(string nombre_, string apellido_, string matricula_);
	~cMedico();

	string get_nombre();
	string get_apellido();
	string get_matricula();
	void set_nombre(string nomb);
	void set_apellido(string ape);
	void set_matricula(string matri);
	cVector<cPaciente>& get_listapac();
	string to_string();
	void imprimir();
	void agregarPaciente(cPaciente paciente);
	cPiezaOrtopedica* buscarprotesis();
	cPiezaOrtopedica* llamarANPA(cVector <cOrtopedia> lista);

	cPiezaOrtopedica* llamarfabricante(cVector<cFabricante> listafabricantes);


private:
	 string nombre;
	 string apellido;
	string matricula;
	cVector <cPaciente> listapacientes;
    cVector <cOrtopedia> listaconvenio;

};