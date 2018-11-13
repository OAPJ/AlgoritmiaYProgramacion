#include <stdio.h>
#include <stdlib.h>
//prototipos de funciones
float pedirDato();
float sacarAreaCirlculo();
float sacarAreaRectangulo();
float sacarAreaTriangulo();
void encabezado();

int main()
{
	float AreaT, AreaR, AreaC;
	printf("Area del tirangulo\n");
	AreaT = sacarAreaTriangulo();
	printf("EL Area del triangulo es: %g\n",AreaT);
	printf("Area del rectangulo\n");
	AreaR = sacarAreaRectangulo();
	printf("EL Area del rectangulo es: %g\n",AreaR);
	printf("Area del cirlculo\n");
	AreaC = sacarAreaCirlculo();
	printf("EL Area del circulo es: %g\n",AreaC); 
	
	
	
	system("PAUSE");
	return 0;
}
//funciones
float pedirDato()
{
	float a;
	printf("dame un dato: \n");
	scanf("%g", &a);
	return a;
}
//funcion para sacar el aerea del triangulo
float sacarAreaTriangulo()
{
	float b1, h1, A1;
	b1 = pedirDato();
	h1 = pedirDato();
	A1 = (b1 * h1) / 2;
	return A1;
}
//Funcion para sacar el Area del resctangulo
float sacarAreaRectangulo()
{
	float b2, h2, A2;
	b2 = pedirDato();
	h2 = pedirDato();
	A2 = b2*h2;
	return A2;
}
//funcion para sacar el area del circulo
float sacarAreaCirlculo()
{
	float pi=3.1416, r, A3;
	r = pedirDato();
	A3= pi * r * r;
	return A3;
}
