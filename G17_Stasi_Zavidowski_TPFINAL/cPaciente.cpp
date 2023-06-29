#include "cPaciente.h"
#include <iostream>

cPaciente::cPaciente(string nombre_, string apellido_, string Fnacimiento, string telefono,  materiales alergias, float RadioMiembroAmp, int codigoprotesis_, Tipodepieza tipo_): nombre(nombre_), apellido(apellido_), Fnacimiento(Fnacimiento), alergias(alergias), tipo(tipo_)
{
	this->nombre = nombre_;
	this->apellido = apellido_;
	this->Fnacimiento = Fnacimiento;
	this->telefono = telefono;
	this->alergias = alergias;
	this->RadioMiembroAmp = RadioMiembroAmp;
	this->codigoprotesis = 0;
	this->tipo = tipo_;

}

cPaciente::~cPaciente()
{
}

string cPaciente::get_nombre()
{
	return this->nombre;
}

string cPaciente::get_apellido()
{
	return this->apellido;
}

string cPaciente::get_fnacimiento()
{
	return this->Fnacimiento;
}

string cPaciente::get_telefono()
{
	return this->telefono;
}

float cPaciente::get_radiomiembroamp()
{
	return this->RadioMiembroAmp;
}

materiales cPaciente::get_alergias()
{
	return this->alergias;
}

int cPaciente::get_tipo()
{
	return this->tipo;
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
	return this->codigoprotesis;
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

