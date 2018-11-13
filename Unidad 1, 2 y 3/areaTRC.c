#include <stdio.h>
#include <stdlib.h>
#define pi 3.1416
float pedirDatoB();
float pedirDatoH();
float pedirDatoR();
float sacarAreaT(float a, float b);
float sacarAreaR(float c, float d);
float sacarAreaC(float e);
void encabezado(void);
/*
* Autor: Juan Antonio
* Fecha: 08/sep/16
* Tema: Area del Triangulo, Circulo y Rectangulo
*/
int main() {
	float b, h, r, AC, AT, AR;
	encabezado();
	b= pedirDatoB();
	h= pedirDatoH();
	r= pedirDatoR();
	AT= sacarAreaT(b,h);
	AR= sacarAreaR(b,h);
	AC= sacarAreaC(r);
	printf("El Area del triangulo es: %.2f\n El Area del Rectangulo es: %.2f\n El Area del Circulo es: %.4f\n",AT,AR,AC );
	return 0;
}
float pedirDatoB()
{
	float b;
	printf("Introduce la base del triagulo: ");
	scanf("%f",&b);
	return b;
}
float pedirDatoH()
{
	float h;
	printf("Introdue la altura del triangulo: ");
	scanf("%f", &h);
	return h;
}
/*
float pedirDato()
{
	float b;
	printf("Introduce la base del rectangulo: ");
	scanf("%f",&m);
	return m;
}
float pedirDato2()
{
	float h;
	printf("Introdue la altura del rectangulo: ");
	scanf("%f", &h);
	return h;
}
*/
float pedirDatoR()
{
	float r;
	printf("Introcue el radio del circulo: ");
	scanf("%f", &r);
	return r;
}
float sacarAreaT(float a, float b)
{
	float AT;
	/*printf("Introduce la base del triangulo: ");
	scanf("%f", %a);
	printf("Introduce la altura: ");
	scanf("%f", %b);*/
	AT = (a*b)/2;
	return AT;
}
float sacarAreaR(float c, float d)
{
	float AR;
	/*printf("Introduce la base del rectangulo: ");
	scanf("%f", &c);
	printf("Introduce la altura del rectangulo: ");
	scanf("%f",&d);*/
	AR = c * d;
	return AR;
}
float sacarAreaC(float e)
{
	float AC;
	/*printf("Introduce el radio del circulo: ");
	scanf("%f", &e);*/
	AC =  pi * e * e;
	return AC;
}
void encabezado(void)
{
	printf("Progrmadaro: JUAN ANTONIO\n");
	printf("Grupo: 1CM2\n");
	printf("Igenieria En Sistemas Computacionales\n");
	printf("/////////////////////////////////////\n");
}
