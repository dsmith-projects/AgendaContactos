/*
 * Contacto.h
 *
 *  Created on: Sep 5, 2017
 *      Author: dsmith
 */

#ifndef INCLUDE_CONTACTO_H_
#define INCLUDE_CONTACTO_H_

#include <string>
#include <sstream>

using namespace std;

class Contacto
{
public:
	string nombre;
	string apellido;
	string tipo;
	string email;

	Contacto(string, string, string, string);
	void buscarContacto(string);
	void agregarTelefono(string, string);

protected:
private:
};



#endif /* INCLUDE_CONTACTO_H_ */
