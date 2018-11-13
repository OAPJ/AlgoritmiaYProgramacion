#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "triangulo.h"
float sacarHipotenusa(float ca, float co){
	float H;
	H = sqrt(ca*ca + co*co);
	return H;
}
float sacarSeno(float co,float h){
	float sen;
	sen = co / h;
	return sen;
}
float sacarCoseno(float ca, float h){
	float cos;
	cos = ca / h;
	return cos;
}
float sacarTangente(float co,float ca){
	float tan;
	tan = co / ca;
	return tan;
}
