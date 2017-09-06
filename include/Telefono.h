/*
 * Telefono.h
 *
 *  Created on: Sep 6, 2017
 *      Author: dsmith
 */

#ifndef INCLUDE_TELEFONO_H_
#define INCLUDE_TELEFONO_H_

#include <string>
#include <sstream>

using namespace std;

class Telefono
{
public:
	string numeroTelefono;
	string tipoTelefono;
	bool usado;
	Telefono *ptr_Next;

	Telefono(); // podemos prescindir de este constructor?
	Telefono(string numero, string tipo);
	virtual ~Telefono();

	void setValores(string numero, string tipo);
	string getValores();
	bool enUso();
	void actualizarNumeroTelefono(string);
	void actualizarTipoTelefono(string);

	Telefono *getNext();

protected:

private:
};

#endif /* INCLUDE_TELEFONO_H_ */
