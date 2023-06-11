#include "cANPA.h"


cANPA::cANPA(cVector<cRegistrosANPA> listaregistros_, cVector<cOrtopedia> listaortopedia_, cVector<cHospital> listahospitales_, cVector<cPaciente> listapacientes_): listaregistros(listaregistros_), listaortopedia(listaortopedia_), listahospitales(listahospitales_), listapacientes(listapacientes_)
{
}

cANPA::~cANPA()
{
}

string cANPA::to_string()
{
	return string();
}

void cANPA::imprimir()
{
}


cPaciente cANPA::buscar_pacienprotesis(cPaciente p, cPiezaOrtopedica pieza)
{
	if (); //podemos usar radio de miembro amputado para decidir si tiene o no protesis? asi solo me busca dentro de mis pacientes CON protesis
	int acum = 0;
	int pac = 0;
	for (int i = 0; i < listapacientes.size(); i++)
	{
		if (pieza.get_cod() == p.get_codigo())
		{
			acum++;
			pac = i;

		}

 }
	if (acum == 0)
		return nullptr; //no se encontro el paciente
	if (acum == 1)
		return listapacientes.at(pac);
	if (acum >= 2)
	{
		//hacer un try catch para decir que el paciente esta repetido
	}

	return ();
}

void cANPA::agregarpaciente(cPaciente paciente)
{
	
}

cPiezaOrtopedica cANPA::buscar_protesis(cPiezaOrtopedica pieza, int codprotesis)// si o si va dynamic cast
{
	return ();
}

void cANPA::asignar()
{
}
