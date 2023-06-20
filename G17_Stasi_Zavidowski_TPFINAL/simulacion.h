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

	time_t fechasolicitada = time(nullptr);
	time_t fechaestimativa = time(nullptr);
	time_t fechaentrega = time(nullptr);
	cPaciente pac("Emilia", "Janin", 12/8/1999, "11-455589", titanio, 12.9, 0);
	vector<cMedico>listamedicosaleman;
	cHospital hospital ("Aleman", "Alvear 544", "cardiologia", listamedicosaleman);

	cFabricante fab("jose", "santa", 43337);
	cRegistrosANPA* reg = new cRegistrosANPA (hospital, uno, fechasolicitada, fechaestimativa, fechaentrega, "cadera", pac);
	
	cPiezaQui u(21.4, titanio, 12, fab, infderecha, 77769, "cardiovascular");
}
