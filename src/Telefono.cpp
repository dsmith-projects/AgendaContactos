/*
 * Telefono.cpp
 *
 *  Created on: Sep 6, 2017
 *      Author: dsmith
 */

#include "../include/Telefono.h"
#include <new>
#include <string>
#include <sstream>

Telefono::Telefono() {
	numeroTelefono = "";
	tipoTelefono = "";
	usado = false;
	ptr_Next = NULL;
}

Telefono::Telefono(string numero, string tipo) {
	numeroTelefono = numero;
	tipoTelefono = tipo;
	usado = true;
	ptr_Next = NULL;
}

Telefono::~Telefono() {
	delete this;
}

void Telefono::setValores(string numero, string tipo) {
	numeroTelefono = numero;
	tipoTelefono = tipo;
}

string Telefono::getValores() {
	ostringstream flujo;
	flujo << numeroTelefono << " (" << tipoTelefono << ")" << endl;
	return flujo.str();
}

bool Telefono::enUso() {
	return usado;
}

void Telefono::actualizarNumeroTelefono(string numeroActualizado) {
	numeroTelefono = numeroActualizado;
}

void Telefono::actualizarTipoTelefono(string nuevoTipo) {
	tipoTelefono = nuevoTipo;
}

Telefono *Telefono::getNext() {
	return ptr_Next;
}
