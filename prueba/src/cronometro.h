/*
 * cronometro.h
 *
 *  Created on: 21 dic. 2016
 *      Author: rriesgoc
 */

#ifndef CRONOMETRO_H_
#define CRONOMETRO_H_

class Cronometro {
public:
	Cronometro();
	virtual ~Cronometro();
	void iniciar();
	void iniciar(long segundos);
	long get_tiempo();
};

#endif /* CRONOMETRO_H_ */
