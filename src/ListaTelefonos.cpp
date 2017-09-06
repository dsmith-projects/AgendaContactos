/*
 * ListaTelefonos.cpp
 *
 *  Created on: Sep 6, 2017
 *      Author: dsmith
 */

#include "../include/ListaTelefonos.h"

#include <string>
#include <sstream>

using namespace std;

ListaTelefonos::ListaTelefonos() {
	ptr_First = NULL;
	ptr_Last = NULL;
}

ListaTelefonos::ListaTelefonos(Telefono *tel) {
	ptr_First = tel;
	ptr_Last = tel;
}

ListaTelefonos::~ListaTelefonos() {
	Telefono *iterador = ptr_First;
	Telefono *borrador;

	while(iterador != NULL) {
		borrador = iterador;
		iterador = iterador->getNext();
		delete borrador;
	}
}

void ListaTelefonos::agregarTelefono(Telefono *tel) {
	if(!ptr_First->enUso()) {
		ptr_First = tel;
		ptr_Last = tel;
	} else {
		ptr_Last->ptr_Next = tel;
		ptr_Last = tel;
	}
}

string ListaTelefonos::obtenerTelefonos() {
	ostringstream flujo;

	Telefono *iterador = ptr_First;

	while(iterador != NULL) {
		flujo << iterador->getValores() << endl;
		iterador = iterador->getNext();
	}

	return flujo.str();
}

