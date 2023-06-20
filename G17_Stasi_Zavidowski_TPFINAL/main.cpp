/*#include <iostream>
#include <string>
#include <vector>
#include "cMedico.h"
#include "cPaciente.h"
#include "cRegistrosANPA.h"
#include <ctime>

void mostrarMenu() {
    std::cout << "---- Men� ----" << std::endl;
    std::cout << "1. Crear M�dico" << std::endl;
    std::cout << "2. Crear Paciente" << std::endl;
    std::cout << "3. Imprimir Datos del M�dico" << std::endl;
    std::cout << "4. Buscar Pr�tesis para Paciente" << std::endl;
    std::cout << "5. Buscar Paciente por Pr�tesis" << std::endl;
    std::cout << "6. Salir" << std::endl;
    std::cout << "Ingrese el n�mero de opci�n: ";
}

int main() {
    cMedico medico;
    cVector<cMedico> medicosaleman;
    cHospital hospital("Aleman", "Av Pueyrredon 1899", "cardiologia", medicosaleman);
    int opcion;
    bool salir = false;

    while (!salir) {
        mostrarMenu();
        std::cin >> opcion;
        std::cin.ignore(); // Limpiar el buffer del teclado

        switch (opcion) {
        case 1:
        {string nombreMedico, apellidoMedico, matriculaMedico;

        std::cout << "Ingrese los datos del m�dico:" << std::endl;
        std::cout << "Nombre: ";
        std::getline(std::cin, nombreMedico);
        std::cout << "Apellido: ";
        std::getline(std::cin, apellidoMedico);
        std::cout << "Matr�cula: ";
        std::getline(std::cin, matriculaMedico);

        // Crear objeto cMedico
        cMedico medico(nombreMedico, apellidoMedico, matriculaMedico);
        medicosaleman.push_back(medico);
        std::cout << "Se ha creado el m�dico exitosamente." << std::endl;
        break;
        }
        case 2:
        {// Solicitar datos del paciente
            std::string nombrePaciente, apellidoPaciente, telefono, fechaNacimiento;
            enum materiales alergias;
            float radioMiembroAmp;
            int codigoProtesis, alergiasint;

            std::cout << "Ingrese los datos del paciente:" << std::endl;
            std::cout << "Nombre: ";
            std::getline(std::cin, nombrePaciente);
            std::cout << "Apellido: ";
            std::getline(std::cin, apellidoPaciente);
            std::cout << "Fecha de Nacimiento: ";
            std::getline(std::cin, fechaNacimiento);
            std::cout << "Tel�fono: ";
            std::getline(std::cin, telefono);
            std::cout << "Alergias: ";
            std::cin >> alergiasint;
            std::cout << "Radio del Miembro Amputado: ";
            std::cin >> radioMiembroAmp;
            std::cout << "C�digo de Pr�tesis: ";
            std::cin >> codigoProtesis;
            alergias = static_cast<materiales>(alergiasint);
            cPaciente paciente(nombrePaciente, apellidoPaciente, fechaNacimiento, telefono, alergias, radioMiembroAmp, codigoProtesis);
            // Crear objeto cPaciente
            paciente.setNombre(nombrePaciente);
            paciente.setApellido(apellidoPaciente);
            paciente.setFechaNacimiento(fechaNacimiento);
            paciente.setTelefono(telefono);
            paciente.setAlergias(alergias);
            paciente.setRadioMiembroAmputado(radioMiembroAmp);
            paciente.set_codigo(codigoProtesis);
            cPaciente paciente(nombrePaciente, apellidoPaciente, fechaNacimiento, telefono, alergias, radioMiembroAmp, codigoProtesis);
         
            // Agregar paciente al m�dico
            medico.agregarPaciente(paciente);
            std::cout << "Se ha creado el paciente exitosamente." << std::endl;
            break;
        }
        case 3:
        { // Imprimir datos del m�dico
            std::cout << "Datos del M�dico:" << std::endl;
            medico.imprimir();
            break;
        }
        case 4:
        {  // Buscar pr�tesis para paciente
            cPiezaOrtopedica protesis = medico.buscarprotesis();
            std::cout << "Se encontr� la siguiente pr�tesis para el paciente:" << std::endl;
            protesis.imprimir();
            break;
        }
        case 5:
        {// Buscar paciente por pr�tesis
            int codigoProtesis;
            std::cout << "Ingrese el c�digo de pr�tesis a buscar: ";
            std::cin >> codigoProtesis;

            cPaciente* pacienteEncontrado = hospital.buscar_pacienprotesis(codigoProtesis);

            if (pacienteEncontrado == nullptr) {
                std::cout << "No se encontr� ning�n paciente con la pr�tesis buscada." << std::endl;
            }
            else {
                std::cout << "Se encontr� el siguiente paciente con la pr�tesis buscada:" << std::endl;
                pacienteEncontrado->imprimir();
                
            }
            break;
        }
        case 6:
        { // Salir del programa
            salir = true;
            break;
        }
        default:
            std::cout << "Opci�n inv�lida. Por favor, ingrese un n�mero v�lido." << std::endl;
            break;
        }

        std::cout << std::endl;
    }

    std::cout << "�Programa finalizado!" << std::endl;

    return 0;
}
*/