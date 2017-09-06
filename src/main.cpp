/*
 * main.cpp
 *
 *  Created on: Sep 5, 2017
 *      Author: dsmith
 */

#include <iostream>
#include <string>
#include "../include/Contacto.h"
#include "../include/Agenda.h"
#include "../include/Telefono.h"
#include "../include/ListaTelefonos.h"

using namespace std;

void desplegarMenu(){
	cout << "\t*** AGENDA DE CONTACTOS ***\n" << endl;
	cout << "1. Agregar un contacto" << endl;
	cout << "2. Consultar un contacto" << endl;
	cout << "3. Modificar un contacto" << endl;
	cout << "4. Eliminar un contacto" << endl;
	cout << "5. Mostrar contactos como lista ordenada" << endl;
	cout << "6. Migrar contactos a un arbol balanceado" << endl;
	cout << "7. Buscar contacto en arbol balanceado" << endl;
	cout << "8. Salir" << endl;
	cout << "\n" << endl;
}

int main() {

	/* Variables para la ejecucion del menu */
	bool salir = false; // Bandera que indica el momento de parada
	int opcion = 0; // Entero ingresado por el usuario para la seleccion una escoger una opcion del menu

	/* Variables para almacenar los datos de un contacto */
	string nombre;
	string apellido;
	string tipoContacto;
	string email;
	string tel;
	string tipoTelefono;

	string busqueda; // variable temporal para buscar un contacto

	/* Instancias de las clases necesarias para manejar los contactos */

	Agenda agenda;
	Telefono telefono;
	ListaTelefonos listaTelefonos; // el telefono debe ser una lista no ordenada nueva para cada uno de los contactos

	while(!salir){

		desplegarMenu();
		cout << "Ingrese una opcion del menu: ";
		cin >> opcion;
		cout << "\n" << endl;

		switch(opcion) {
		case 1:
			Contacto *ptr_contacto;	// Debería igualarse a NULL ???
			ListaTelefonos *ptr_ListaTelef = new ListaTelefonos();		// Creacion de un puntero de tipo ListaTelefonos

			// Solicito datos del contacto excepto numeros telefonicos
			cout << "Nombre y apellido: ";
			cin >> nombre >> apellido;
			cout << "Tipo [familiar, amigo, comercial, profesional]: ";
			cin >> tipoContacto;
			cout << "Correo electronico: ";
			cin >> email;

			// variables que maneja el ciclo que solicita un nuevo numero telefonico hasta que el usuario lo desee
			bool agregarNumero = true;
			char seguir;
			//ciclo que se mantiene solicitando numeros telefonicos del nuevo contacto hasta que el usuario lo desee
			do {
				cout << "Numero de telefono: ";
				cin >> tel;

				cout << "Tipo de telefono [celular, hogar, trabajo]: ";
				cin >> tipoTelefono;

				Telefono *ptr_Telef = new Telefono(tel, tipoTelefono);	// Creacion de un puntero de tipo Telefono
				ptr_ListaTelef->agregarTelefono(ptr_Telef);

				cout << "¿Agregar otro numero de telefono? [s/n]: ";
				cin >> seguir;

				if(seguir == 'n'){
					agregarNumero = false;
				}
			}while(agregarNumero);

			ptr_contacto = new Contacto();
			contacto = agenda.crearContacto(nombre, apellido, tipo, email); // la agenda crea el contacto y lo devuelve para que se le agreguen los numeros de telefono

			break;
		case 2:
			cout << "Buscar contacto: " << endl;
			cout << "Ingrese el nombre o apellido del contacto: ";
			cin >> busqueda;
			buscarContacto(busqueda);
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			cout << nombre << " " << apellido << endl;
			cout << telefono << " (" << tipo << ")" << endl;
			cout << email << endl;
			break;
		case 8:
			salir = true;
			cout << "Usted ha salido del programa\n" << endl;
			break;
		default:
			cout << "Opcion invalida. Intentelo nuevamente.\n" << endl;
			break;
		}
	}

	return 0;
}



