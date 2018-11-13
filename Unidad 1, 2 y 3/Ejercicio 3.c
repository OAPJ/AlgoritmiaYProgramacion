#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void decision();
float radio();
float altura();
float areaCirculo();
float areaAro();
float volumenCilindro();

int main() {
	int opcion;
	printf("Que quieres sacar papy :v\n");
	printf("1 para area del circulo:\n");
	printf("2 para el area del aro\n");
	printf("3 para el volumen del cilindro\n");
	scanf("%d",&opcion);
	switch (opcion)
{
		case 1:
			areaCirculo();
			break;
		case 2:
			areaAro();
			break;
		case 3:
			volumenCilindro();
			break;
			default: printf("No pos no se que decir, solo que estas mal paps\n");
}

	
	return 0;
}
float radio(){
	float r;
	printf("Dame el valor del radio:\n",r);
	scanf("%g",&r);
	return r;
}
float altura(){
	float h;
	printf("Dame la longitud de la altura:\n",h);
	scanf("%g",&h);
	return h;
}
float areaCirculo(){
	float r,area, PI;
	PI = 3.1416;
	r = radio();
	area= (PI*r*r);
	printf("el area del circulo es:%g \n",area);
	return area;
}
float areaAro(){
	float PI,r1, r2, areaA;
	PI=3.1416;
	r1= radio();
	r2= radio();
	areaA= (PI*r2*r2)-(PI*r1*r1);
	printf("el area del aro es:%g \n",areaA);
	return areaA;
}
float volumenCilindro(){
	float volumen,PI;
	PI=3.1416;
	volumen= radio()*PI*altura();
	printf("el volumen del cilindro es:%g \n",volumen);
	return volumen;

	}
