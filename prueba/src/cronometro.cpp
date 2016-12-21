/*
 * cronometro.cpp
 *
 *  Created on: 21 dic. 2016
 *      Author: rriesgoc
 */
#include <time.h>

#include "cronometro.h"

long tiempoInicio;

Cronometro::Cronometro() {

}

Cronometro::~Cronometro() {
	// TODO Auto-generated destructor stub
}

void Cronometro::iniciar() {
	time_t seconds;

	long tiempoActual = time (NULL);
		tiempoInicio = tiempoActual;
}

void Cronometro::iniciar(long segundos) {
	time_t seconds;

	long tiempoActual = time (NULL);
		tiempoInicio = tiempoActual - segundos;
}

long Cronometro::get_tiempo() {
	time_t seconds;

	long tiempoActual = time (NULL);

	return tiempoActual - tiempoInicio;
}
