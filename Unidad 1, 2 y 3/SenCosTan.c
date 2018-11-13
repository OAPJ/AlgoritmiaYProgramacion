#include <stdio.h>
#include <stdlib.h>
#include "triangulo.h"

int main() {
	float a,b, h;
	a= 5;
	b=7;
	h= sacarHipotenusa(a, b);
	printf("Seno: %f\n", sacarSeno(a, h));
	printf("Coseno: %f\n", sacarCoseno(b, h));
	printf("Tangente: %f\n", sacarTangente(a, b));
	
	return 0;
}
