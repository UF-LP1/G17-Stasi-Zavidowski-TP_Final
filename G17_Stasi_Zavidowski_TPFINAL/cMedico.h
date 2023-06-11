#pragma once
#include <string>
using namespace std;
class cMedico
{
public:
	cMedico(string nombre_, string apellido_, string matricula_);
	~cMedico();

	string get_nombre();
	string get_apellido();
	string get_matricula();
	void autorizar(string);
	string to_string();
	void imprimir();
private:
	const string nombre;
	const string apellido;
	string matricula;
};

