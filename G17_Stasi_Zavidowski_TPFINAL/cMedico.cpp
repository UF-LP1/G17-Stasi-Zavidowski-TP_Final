#include "cMedico.h"
#include "cVector.hpp"
#include <vector>
#include "cANPA.h"

cMedico::cMedico(string nombre_, string apellido_, string matricula_,cVector <cPaciente> listapacientes_, cVector <cOrtopedia> listaconvenio_): nombre(nombre_), apellido(apellido_)
{
	this->matricula = matricula_;
	this->listaconvenio = listaconvenio_;
	this->listapacientes = listapacientes_;
}

cMedico::cMedico()
{
}

cMedico::cMedico(string nombre_, string apellido_, string matricula_)
{
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

cVector<cPaciente>& cMedico::get_listapac()
{
	return listapacientes;
}


string cMedico::to_string()
{
	stringstream salida;
	char coma = ',';
	salida << "Nombre:" << this->nombre << coma << "Apellido:" << this->apellido << coma << "matricula:" << this->matricula << endl;
	return salida.str();
}

void cMedico::imprimir()
{
	cout << this->to_string() << endl;
}
void cMedico::agregarPaciente(cPaciente paciente) {
	listapacientes.push_back(paciente);
}
cPiezaOrtopedica cMedico::buscarprotesis()
{
	int aux = 0;
	for (int i = 0; i < listaconvenio.size(); i++)
	{
		std::vector <cPiezaOrtopedica> listaprotesis = listaconvenio[i].get_listaprotesis();
		std::vector <cOrtopedia> listatodasortopedias;

		for (int j = 0; j < listaprotesis.size(); j++) {
		
			if (listapacientes[i] == listaprotesis[j]) //encotre la protesis y ademas el paceinte no es alergico a ese material, osea me salio todo bieeeen, uso la sobrecarga del == 
			{
				listapacientes[i].set_codigo(listaprotesis[j].get_cod());// le guardo el codigo de la protesis que le voy a poner al paceinte, osea si su codigo != 0, ya tiene protesis
				aux = listaprotesis[j].get_cod();
				cOrtopedia::restarStock();
				return listaprotesis[j]; 
			}
		}

	}
   if (aux == 0) // NO ENCONTREE LA PROTESIS EN LAS ORTOPEDIAS QUE TENGO CONVENIO
	{
		cPiezaOrtopedica encontrada = llamarANPA(cANPA::get_listatodasortopedias());
		aux = encontrada.get_cod();
		return encontrada;
	}
	if (aux == 0) {
		cPiezaOrtopedica protesisfabricada = llamarfabricante(cANPA::get_listafabricantes());
		aux = protesisfabricada.get_cod();
		return protesisfabricada;
	}
	if (aux == 0) {
		throw new exception("No encontramos la protesis adecuada para su paciente");
	}
	return ; 
}

cPiezaOrtopedica cMedico::llamarANPA(cVector <cOrtopedia> listatodasortopedias)
{
	cPiezaOrtopedica objvacio;

	for (int i = 0; i < listatodasortopedias.size(); i++) {
		int aux = 0;
		cOrtopedia ortopedia = listatodasortopedias[i]; //ingreso a la primer ortopedia

		//recorro la lista de protesis que tiene esa ortopedoa
		for (int j = 0; j < ortopedia.get_listaprotesis().size(); j++) {
			cPiezaOrtopedica protesis = ortopedia.get_listaprotesis()[j]; // Accedo a la protesis en la posición j

			if (listapacientes[i] == protesis) {
				listapacientes[i].set_codigo(protesis.get_cod());
				aux = protesis.get_cod();
				return protesis;
			}
		}
	}
	return objvacio;
}

	cPiezaOrtopedica cMedico::llamarfabricante(cVector <cFabricante> listafabricantes)
	{
		cPiezaOrtopedica objnulo;
		for (int i = 0; i < listafabricantes.size(); i++) {
			int aux = 0;
			cFabricante fabric = listafabricantes[i];

			//recorro la lista de protesis que tiene ese fabricante
			for (int j = 0; j < fabric.get_listaprotesisrealizadas().size(); j++) {
				cPiezaOrtopedica protesis = fabric.get_listaprotesisrealizadas()[j]; // Accedo a la protesis en la posición j

				if (listapacientes[i] == protesis) {
					listapacientes[i].set_codigo(protesis.get_cod());
					aux = protesis.get_cod();
					return protesis;
				}
			}
		}
		return objnulo;
	}
	bool operator==(cPaciente& pac, cPiezaOrtopedica& prot)
	{
		bool esta = false;
			if (pac.get_radiomiembroamp() == prot.get_dimensiones() && pac.get_alergias() != prot.get_tipomaterial())
				esta = true;
		return esta;
	}
