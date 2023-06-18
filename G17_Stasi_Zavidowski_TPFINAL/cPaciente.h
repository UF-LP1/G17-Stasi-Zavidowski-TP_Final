#pragma once
#include <string>
#include "cHospital.h"
using namespace std;
class cPaciente
{
public:
	cPaciente(string nombre_, string apellido_, string Fnacimiento, string telefono,enum materiales alergias, float RadioMiembroAmp, int codigoprotesis_);
	~cPaciente();

	string get_nombre();
	string get_apellido();
	time_t get_fnacimiento();
	string get_telefono();
	float get_radiomiembroamp();
	materiales get_alergias();
	int get_cod();
	string to_string();
	void imprimir();
	int get_codigo();
	void set_codigo(int cod);

private:
	const string nombre;
	const string apellido;
	const string Fnacimiento;
	string telefono;
	const enum materiales alergias;
	float RadioMiembroAmp;
	int codigoprotesis;


};

