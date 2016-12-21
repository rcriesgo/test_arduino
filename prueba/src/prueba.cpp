//============================================================================
// Name        : prueba.cpp
// Author      : DSI Astur
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <stdio.h>
#include <time.h>

#include "cronometro.h"

int main() {

	Cronometro cronometro = Cronometro();

		cronometro.iniciar (155646);

		long tiempo = cronometro.get_tiempo();

		printf ("%ld tiempo", tiempo);

	    return 0;
}
