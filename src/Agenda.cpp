/*
 * Agenda.cpp
 *
 *  Created on: Sep 5, 2017
 *      Author: dsmith
 */

#include "../include/Agenda.h"

void crearContacto(string pnombre, string papellido, string ptipo, string pemail) {
	Contacto contacto = new Contacto(pnombre, papellido, ptipo, pemail);
	agregarContactoALista(contacto);
	contacto = consultarContacto();

}

void Agenda::agregarContacto(Contacto contacto) {
	// acá se agrega el contacto a la lista de contactos
}

Contacto consultarContacto(string){
	// devuelve el contacto solo para despelgar sus datos
}

void Agenda::actualizarContacto(){

}

string Agenda::obtenerContactos() {
	ostringstream flujo;

	Telefono *iterador = ptr_First;

	while(iterador != NULL) {
		flujo << iterador->getValores() << endl;
		iterador = iterador->getNext();
	}

	return flujo.str();
}
