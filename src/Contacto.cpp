/*
 * Contacto.cpp
 *
 *  Created on: Sep 5, 2017
 *      Author: dsmith
 */

#include "../include/Contacto.h"


Contacto::Contacto(string pnombre, string papellido, string ptipo, string pemail){
	nombre = pnombre;
	apellido = papellido;
	tipo = ptipo;
	email = pemail;
}

void Contacto::agregarTelefono(string telefono, string tipoTelefono) {
	new Telefono(telefono, tipoTelefono);
}

void Contacto::buscarContacto(string palabra) {

}


