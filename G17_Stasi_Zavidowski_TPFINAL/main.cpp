#include <iostream>
#include <string>
#include <vector>
#include "cMedico.h"
#include "cPaciente.h"
#include "cRegistrosANPA.h"
#include <ctime>

void mostrarMenu() {// esta manera dinamica de interaccion con el usuario lo hicimos para mostrar como crear un medico del hospital aleman y trabajar sobre ello
    std::cout << "---- Menu ----" << std::endl;
    std::cout << "1. Crear Medico del hospital aleman" << std::endl;
    std::cout << "2. Crear Paciente" << std::endl;
    std::cout << "3. Imprimir Datos del Medico" << std::endl;
    std::cout << "4. Buscar Protesis para Paciente" << std::endl;
    std::cout << "5. Buscar Paciente por Protesis" << std::endl;
    std::cout << "6. Salir" << std::endl;
    std::cout << "Ingrese el numero de opcion: ";
}

int main() {
    cMedico medico;
    cVector<cMedico> medicosaleman; 
    cVector<cPiezaOrtopedica> listalujan;
    cHospital hospital("Aleman", "Av Pueyrredon 1899", "traumatologia", medicosaleman);
    int opcion;
    bool salir = false;
     cPaciente pac1("Renata", "Stasi", "21/11/2000", "22298888", titanio, 32.2, 112, supderecha);
     cPaciente pac2("Emilia", "Janin", "3/10/12", "112321", polietileno, 12.3, 222, supizquierda);
     cPiezaNoQui pno1(12.3, acero, 1292001, supderecha, 112, 32.2);
     cPiezaQui p2(21, acero, 2112018, supizquierda, 222, "cadera");
     cOrtopedia lujan ("lujan", "callao 22", listalujan);
     listalujan + pno1;
     listalujan + p2;
    medico.agregarPaciente(pac1);
    medico.agregarPaciente(pac2);

    while (!salir) {
        mostrarMenu();
        std::cin >> opcion;

        switch (opcion) {
        case 1:
        {
            string nombreMedico, apellidoMedico, matriculaMedico;

            cout << "Ingrese los datos del médico:" << endl;
            cout << "Nombre: ";
            cin >> nombreMedico;
            cout << "Apellido: ";
            cin >> apellidoMedico;
            cout << "Matricula: ";
            cin >> matriculaMedico;

            // Crear objeto cMedico
            cMedico medico(nombreMedico, apellidoMedico, matriculaMedico);
            medico.set_nombre(nombreMedico);
            medico.set_apellido(apellidoMedico);
            medico.set_matricula(matriculaMedico);
            medicosaleman + medico; //utilizo sobrecarga del +
            cout << "Se ha creado el médico exitosamente." << endl;
            break;
        }
        case 2:
        {// Solicitar datos del paciente
            string nombrePaciente, apellidoPaciente, telefono, fechaNacimiento;
             materiales alergias;
             Tipodepieza tipo;
            float radioMiembroAmp;
            int codigoProtesis, alergiasint, tipoint;

            cout << "Ingrese los datos del paciente:" << std::endl;
            cout << "Nombre: ";
            cin >> nombrePaciente;
            cout << "Apellido: ";
            cin >> apellidoPaciente;
            cout << "Fecha de Nacimiento: ";
            cin>> fechaNacimiento;
            cout << "Telefono: ";
            cin>> telefono;
            cout << "Alergias: 1-titanio, 2-bioceramica, 3-polietileno, 4-acero, 5-fibradecarbono ";
            cin >> alergiasint;
            cout << "Radio del Miembro Amputado: ";
            cin >> radioMiembroAmp;
            cout << "Codigo de Protesis: ";
            cin >> codigoProtesis;
            cout << "Tipo de Protesis: 1-infderecha, 2-infizquierda, 3-supderecha, 4-supizquierda";
            cin >> tipoint;
            alergias = static_cast<materiales>(alergiasint);
            tipo = static_cast<Tipodepieza>(tipoint);
            cPaciente paciente(nombrePaciente, apellidoPaciente, fechaNacimiento, telefono, alergias, radioMiembroAmp, codigoProtesis, tipo);
            // Crear objeto cPaciente
            paciente.setNombre(nombrePaciente);
            paciente.setApellido(apellidoPaciente);
            paciente.setFechaNacimiento(fechaNacimiento);
            paciente.setTelefono(telefono);
            paciente.setAlergias(alergias);
            paciente.setRadioMiembroAmputado(radioMiembroAmp);
            paciente.set_codigo(codigoProtesis);
            paciente.setTipo(tipo);

            // Agregar paciente al médico
            medico.agregarPaciente(paciente);
            cout << "Se ha creado el paciente exitosamente." << endl;
            break;
        }
        case 3:
        { // Imprimir datos del médico
            cout << "Datos del Medico:" << endl;
            for (int i = 0; i < medicosaleman.size(); i++) {
                medicosaleman[i].imprimir();
                break;
            }
        }
        case 4:
        {  // Buscar prótesis para paciente
            try {
                cPiezaOrtopedica* protesis = medico.buscarprotesis();
                cout << "Se encontro la siguiente protesis para el paciente:" << endl;
                protesis->imprimir();
            }
            catch (exception* e) {
                cerr << "Error" << e->what() << endl;
            }
            break;
        }
        case 5:
        {// Buscar paciente por prótesis
            int codigoProtesis;
            cout << "Ingrese el codigo de protesis a buscar: ";
            cin >> codigoProtesis;

            
            try {

                cPaciente* pacienteEncontrado = hospital.buscar_pacienprotesis(codigoProtesis);
                if (pacienteEncontrado != nullptr) {
                    cout << "Se encontro el siguiente paciente con la protesis buscada:" << endl;
                    pacienteEncontrado->imprimir();
                }
            }
            catch (exception* e){
                cerr << "Error" << e->what() << endl;
            }
        
            break;
        }
        case 6:
        { // Salir del programa
            salir = true;
            break;
        }
        default:
            cout << "Opcion invalida. Por favor, ingrese un numero valido." << endl;
            break;
        }

        cout << endl;
    }
   
    return 0;
}
