#pragma once
#include "cFabricante.h"
#include "cHospital.h"
#include "cMedico.h"
#include "cOrtopedia.h"
#include "cPaciente.h"
#include "cPiezaOrtopedica.h"
#include "cRegistrosANPA.h"
#include "cPiezaNoQui.h"
#include "cPiezaQui.h"
void simulacion() {

	cVector <cPaciente> listapa;
	cVector<cOrtopedia> listaconvenios; 
	cVector <cPaciente> listapa_dos;
	cVector<cOrtopedia> listaconvenios_dos;

	cMedico uno ("Ezequiel", "Perez", "322.222.311", listapa, listaconvenios);
	cMedico dos("Sol", "Lopez", "367.122.981", listapa_dos, listaconvenios_dos);



	vector<cMedico>listamedicosaleman;
	cHospital* h = new cHospital("Aleman", "Alvear 544", "cardiologia", listamedicosaleman);

	cFabricante fab("jose", "santa", 43337);
	
	cPiezaQui(21.4, titanio, 12, fab, infderecha, "cardiovascular");
}
