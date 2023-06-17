#include "cMedico.h"

cMedico::cMedico(string nombre_, string apellido_, string matricula_,vector <cPaciente> listapacientes_, vector <cOrtopedia> listaconvenio_): nombre(nombre_), apellido(apellido_)
{
	this->matricula = matricula_;
	this->listaconvenio = listaconvenio_;
}

cMedico::~cMedico()
{
}

string cMedico::get_nombre()
{
	return string();
}

string cMedico::get_apellido()
{
	return string();
}

string cMedico::get_matricula()
{
	return string();
}


string cMedico::to_string()
{
	return string();
}

void cMedico::imprimir()
{
}

cPiezaOrtopedica cMedico::buscarprotesis()
{
	int aux;
	for (int i = 0; i < listaconvenio.size(); i++)
	{
		vector <cPiezaOrtopedica> listaprotesis = listaconvenio[i].get_listaprotesis();
		cVector<cOrtopedia> listatodasortopedias;

		for (int j = 0; j < listaprotesis.size(); j++) {
			aux = 0;
			if (listapacientes[i].get_radiomiembroamp() == listaprotesis[j].get_dimensiones() && listapacientes[i].get_alergias() != listaprotesis[j].get_tipomaterial()) //encotre la protesis y ademas el paceinte no es alergico a ese material, osea me salio todo bieeeen
			{
				listapacientes[i].set_codigo(listaprotesis[j].get_cod());// le guardo el codigo de la protesis que le voy a poner al paceinte, osea si su codigo != 0, ya tiene protesis
				aux = listaprotesis[j].get_cod();
				return listaprotesis[j]; 
			}
		}

	}
	if (aux == 0) // NO ENCONTREE LA PROTESIS EN LAS ORTOPEDIAS QUE TENGO CONVENIO
		 cPiezaOrtopedica encontrada = llamarANPA(cANPA::get_listatodasortopedias());
	return ();
}

cPiezaOrtopedica cMedico::llamarANPA(cVector <cOrtopedia> listatodasortopedias)
{

	for (int i = 0; i < listatodasortopedias.size(); i++) {
		int aux = 0;
		cOrtopedia ortopedia = listatodasortopedias[i]; //ingreso a la primer ortopedia

		//recorro la lista de protesis que tiene esa ortopedoa
		for (int j = 0; j < ortopedia.get_listaprotesis().size(); j++) {
			cPiezaOrtopedica protesis = ortopedia.get_listaprotesis()[j]; // Accedo a la protesis en la posición j

			if (listapacientes[i].get_radiomiembroamp() == protesis.get_dimensiones() && listapacientes[i].get_alergias() != protesis.get_tipomaterial()) {
				listapacientes[i].set_codigo(protesis.get_cod());
				aux = protesis.get_cod();
				return protesis;
			}
		}
	}

}


