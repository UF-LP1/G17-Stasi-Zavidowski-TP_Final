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
    //cVector<cMedico> medicosaleman;
    cVector<cMedico> medicosaleman; //= new cVector<cMedico>;
    cHospital hospital("Aleman", "Av Pueyrredon 1899", "traumatologia", medicosaleman);
    int opcion;
    bool salir = false;

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
            cout << "Matrícula: ";
            cin >> matriculaMedico;

            // Crear objeto cMedico
            //cMedico medico(nombreMedico, apellidoMedico, matriculaMedico);
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
            getline(std::cin, nombrePaciente);
            cout << "Apellido: ";
            getline(std::cin, apellidoPaciente);
            cout << "Fecha de Nacimiento: ";
            getline(std::cin, fechaNacimiento);
            cout << "Teléfono: ";
            getline(std::cin, telefono);
            cout << "Alergias: 1-titanio, 2-bioceramica, 3-polietileno, 4-acero, 5-fibradecarbono ";
            cin >> alergiasint;
            cout << "Radio del Miembro Amputado: ";
            cin >> radioMiembroAmp;
            cout << "Código de Prótesis: ";
            cin >> codigoProtesis;
            cout << "Tipo de Prótesis: 1-infderecha, 2-infizquierda, 3-supderecha, 4-supizquierda";
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
            std::cout << "Se ha creado el paciente exitosamente." << std::endl;
            break;
        }
        case 3:
        { // Imprimir datos del médico
            std::cout << "Datos del Medico:" << std::endl;
            for (int i = 0; i < medicosaleman.size(); i++) {
                medicosaleman[i].imprimir();
                break;
            }
        }
        case 4:
        {  // Buscar prótesis para paciente
            try {
                cPiezaOrtopedica* protesis = medico.buscarprotesis();
                std::cout << "Se encontro la siguiente protesis para el paciente:" << std::endl;
                protesis->imprimir();
            }
            catch (exception* e) {
                std::cerr << "Error" << e->what() << std::endl;
            }
            break;
        }
        case 5:
        {// Buscar paciente por prótesis
            int codigoProtesis;
            std::cout << "Ingrese el codigo de protesis a buscar: ";
            std::cin >> codigoProtesis;

            cPaciente* pacienteEncontrado = hospital.buscar_pacienprotesis(codigoProtesis);
            try {

                cPaciente* pacienteEncontrado = hospital.buscar_pacienprotesis(codigoProtesis);
                if (pacienteEncontrado != nullptr) {
                    std::cout << "Se encontro el siguiente paciente con la protesis buscada:" << std::endl;
                    pacienteEncontrado->imprimir();
                }
            }
            catch (exception* e){
                std::cerr << "Error" << e->what() << std::endl;
            }
        
            break;
        }
        case 6:
        { // Salir del programa
            salir = true;
            break;
        }
        default:
            std::cout << "Opcion invalida. Por favor, ingrese un numero valido." << std::endl;
            break;
        }

        std::cout << std::endl;
    }

    return 0;
}
