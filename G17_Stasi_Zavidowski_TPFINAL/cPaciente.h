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

	void setNombre(string nombre);

	void setApellido(string apellido);

	void setFechaNacimiento(string fechaNacimiento);

	void setTelefono(string telefono);

	void setRadioMiembroAmputado(float radioMiembroAmputado);

	void setAlergias(materiales alergias);

private:
	const string nombre;
	const string apellido;
	string Fnacimiento;
	string telefono;
	const enum materiales alergias;
	float RadioMiembroAmp;
	int codigoprotesis;


};

