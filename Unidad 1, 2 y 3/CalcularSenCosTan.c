#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float sacarHipotenusa(float *ca, float *co);
float sacarSeno(float *co, float *h);
float sacarCoseno(float *ca, float *h);
float sacarTangente(float *co, float *ca);

int main() {
	float CA, CO, H, Sen, Cos, Tan;
	printf("Introduce el cateto adyacente: ");
	scanf("%g",&CA);
	printf("Introduce el cateto opuesto: ");
	scanf("%g",&CO);
	H= sacarHipotenusa(&CA, &CO);
	Sen= sacarSeno(&CO, &H);
	Cos= sacarCoseno(&CA,&H);
	Tan= sacarTangente(&CO,&CA);
	printf("La hipotenusa es: %g\n",H);
	printf("El seno es: %g\n",Sen);
	printf("El coseno es: %g\n",Cos);
	printf("La tangente es: %g\n",Tan);
	
	system("PAUSE");
	return 0;
}
float sacarHipotenusa(float *ca, float *co){
	float H;
	H = sqrt(*ca * *ca + *co * *co);
	return H;
}
float sacarSeno(float *co,float *h){
	float sen;
	sen = *co / *h;
	return sen;
}
float sacarCoseno(float *ca, float *h){
	float cos;
	cos = *ca / *h;
	return cos;
}
float sacarTangente(float *co,float *ca){
	float tan;
	tan = *co / *ca;
	return tan;
}
