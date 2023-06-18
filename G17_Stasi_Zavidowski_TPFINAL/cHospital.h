#pragma once
#include <string>
#include "cMedico.h"
#include "cPaciente.h"
#include <vector>
using namespace std;

class cHospital
{
public:
	cHospital(string nombre_, string direccion_, string espcialidad_, vector<cMedico> medicos_);
	~cHospital();

	string get_nombre();
	string get_direccion();
	string get_especialidad();
	string to_string();
	void imprimir();
	cPaciente buscar_pacienprotesis(cPiezaOrtopedica pieza);


private:
	const string nombre;
	const string direccion;
    string especialidad;
	std::vector <cMedico> medicos;
	

};

