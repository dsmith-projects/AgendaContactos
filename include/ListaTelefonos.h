/*
 * ListaTelefonos.h
 *
 *  Created on: Sep 6, 2017
 *      Author: dsmith
 */

#ifndef INCLUDE_LISTATELEFONOS_H_
#define INCLUDE_LISTATELEFONOS_H_

#include "Telefono.h"

using namespace std;

class ListaTelefonos
{
public:
	Telefono *ptr_First;
	Telefono *ptr_Last;

	ListaTelefonos();
	ListaTelefonos(Telefono *tel);
	virtual ~ListaTelefonos();

	void agregarTelefono(Telefono *tel);
	string obtenerTelefonos();

protected:

private:

};



#endif /* INCLUDE_LISTATELEFONOS_H_ */
