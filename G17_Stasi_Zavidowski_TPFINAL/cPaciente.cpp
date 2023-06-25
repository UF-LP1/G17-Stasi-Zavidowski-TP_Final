#include "cPaciente.h"
#include <iostream>

cPaciente::cPaciente(string nombre_, string apellido_, string Fnacimiento, string telefono, enum materiales alergias, float RadioMiembroAmp, int codigoprotesis_, Tipodepieza tipo_): nombre(nombre_), apellido(apellido_), Fnacimiento(Fnacimiento), alergias(alergias), tipo(tipo_)
{
	this->telefono = telefono;
	this->RadioMiembroAmp = RadioMiembroAmp;
	this->codigoprotesis = 0;


}

cPaciente::~cPaciente()
{
}

string cPaciente::get_nombre()
{
	return nombre;
}

string cPaciente::get_apellido()
{
	return apellido;
}

string cPaciente::get_fnacimiento()
{
	return Fnacimiento;
}

string cPaciente::get_telefono()
{
	return telefono;
}

float cPaciente::get_radiomiembroamp()
{
	return RadioMiembroAmp;
}

materiales cPaciente::get_alergias()
{
	return materiales();
}

int cPaciente::get_cod()
{
	return codigoprotesis;
}

string cPaciente::to_string()
{
	
    stringstream salida;
	char coma = ',';
	salida << "El telefono es:" << this->telefono << coma << "El radio del miembro amputado es:" << this->RadioMiembroAmp << coma << "El codigo de la protesis es:" << this->codigoprotesis << endl;
	return salida.str();
}

void cPaciente::imprimir()
{
	cout << this->to_string() << endl;
}

int cPaciente::get_codigo()
{
	return codigoprotesis;
}

void cPaciente::set_codigo(int cod)
{
	codigoprotesis = cod;
}
void cPaciente::setNombre(string nombre) {
    nombre = nombre;
}

void cPaciente::setApellido(string apellido) {
    apellido = apellido;
}

void cPaciente::setFechaNacimiento(string fechaNacimiento) {
   Fnacimiento = fechaNacimiento;
}

void cPaciente::setTelefono(string telefono) {
    telefono = telefono;
}

void cPaciente::setAlergias( materiales alergias) {
    alergias = alergias;
}

void cPaciente::setTipo(Tipodepieza tipo)
{
	tipo = tipo;
}

bool cPaciente::operator==(cPiezaOrtopedica& pieza)
{
	bool esta = false;
	if (this->alergias != pieza.get_tipomaterial() && this->RadioMiembroAmp == pieza.get_dimensiones() && this->tipo == pieza.get_tipo())
		esta = true;

	return esta;
}

void cPaciente::setRadioMiembroAmputado(float radioMiembroAmputado) {
    RadioMiembroAmp = radioMiembroAmputado;
}

