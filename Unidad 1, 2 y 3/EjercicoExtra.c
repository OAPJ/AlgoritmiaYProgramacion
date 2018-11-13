#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float pedirDato();
float sacarHipotenusa(float A, float O);
float sacarArea(float a, float b);
float sacarAngulo();
float decidirOpcion();


int main() { //	swirch()	case 

   float ob;
   ob = decidirOpcion();
    if(ob==1){
    	float A,B, Hipotenusa;
    	A = pedirDato();
		B = pedirDato();
		Hipotenusa  = sacarHipotenusa(A, B);
		printf("La hipotenusa es: %g\n",Hipotenusa);
	}
	if(ob==2){
		float A, B, Area;
		A = pedirDato();
		B = pedirDato();
		Area = sacarArea(A, B);
		printf("El arrea del triangulo es: %g\n",Area);
	}
	if(ob==3){
		float angulo3;
		angulo3 = sacarAngulo();
		printf("El tercer angulo del triangulo es: %g", angulo3);
	}
    return 0;
}


float pedirDato()
{
	float a;
	printf("Introduce el valor de un cateto: ");
	scanf("%g",a);
	return a;
}
float sacarHipotenusa(float A, float O)
{
	float Hipotenusa;
	Hipotenusa = sqrt (A*A + O*O);
	return Hipotenusa; 
}
float sacarArea(float a, float b)
{
	float Area;
	Area = (a * b) / 2;
	return Area;
}
float sacarAngulo()
{
	float a1, a2, a3;
	printf("Intorduce un un angulo: ");
	scanf("%g", &a1);
	printf("Introduce el otro angulo: ");
	scanf("%g", &a2);
	a3 = 180 - a1 + a2;
	return a3; 
}
float decidirOpcion()
{
	float ob;
	printf("Que quieres sacar primero\n");
	printf("1.- La hipotenusa\n");
	printf("2.- El Area\n");
	printf("3.- El tercer angulo\n");
	scanf("%g", &ob);
	return ob;
}
