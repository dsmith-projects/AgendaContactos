/*
 * Agenda.h
 *
 *  Created on: Sep 5, 2017
 *      Author: dsmith
 */

#ifndef INCLUDE_AGENDA_H_
#define INCLUDE_AGENDA_H_

#include <string>
#include <sstream>

#include "../include/Contacto.h"

using namespace std;

class Agenda
{
public:
	Contacto *ptr_FirstContacto;
	Contacto *ptr_LastContacto;

	Agenda();
	Agenda(Contacto *contacto);
	virtual ~Agenda();

	void agregarContacto(Contacto *contacto);
	void consultarContacto(string);
	void actualizarContacto(); //debería recibir al Contacto como parámetro?
//	void migrarContactosAArbol();
//	void buscarContactoEnArbol();

protected:
private:
};

#endif /* INCLUDE_AGENDA_H_ */
