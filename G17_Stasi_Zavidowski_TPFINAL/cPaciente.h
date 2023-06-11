#pragma once
#include <string>
#include "cHospital.h"
using namespace std;
class cPaciente
{
public:
	cPaciente(string nombre_, string apellido_, string Fnacimiento, string telefono,string alergias, cHospital hospital, float RadioMiembroAmp, int codigopaciente_);
	~cPaciente();

	string get_nombre();
	string get_apellido();
	time_t get_fnacimiento();
	string get_telefono();
	float get_radiomiembroamp();
	string to_string();
	void imprimir();
	int get_codigo();

private:
	const string nombre;
	const string apellido;
	const string Fnacimiento;
	string telefono;
	string alergias;
	cHospital hospital;
	float RadioMiembroAmp;
	int codigoprotesis;// ya sea la que tengo o la que necesito
	bool tieneprotesis; 

};

