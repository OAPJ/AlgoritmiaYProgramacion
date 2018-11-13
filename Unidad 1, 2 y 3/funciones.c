#include <stdio.h>
#include <stdlib.h>
//prorotipo de las funciones
float pedirDato();
float sacarMedia(float a, float b);
void encabezado(void);
/*
*Autor: Juan Antonio
* Fecha: 08/sep/16
* Tema: Fuciones en C, Promedio, suma
*/

int main() {
	
	float n1, n2, r;
	encabezado(); //lamando a una funicon 
	n1 = pedirDato();
	n2 = pedirDato();
	r = sacarMedia(n1, n2);
	printf("La media de %.2f y %.2f es %.2f\n", n1, n2, r);
	
	system("PAUSE"); 
	return 0;
}
// Definicion de  funciones
float pedirDato()
{
	//vairable local para almacenar dato
	float m;
	printf("Introduce un dato: ");
	scanf("%f", &m);
	return m;
}
float sacarMedia(float a, float b)
{
	float resultado;
	resultado=(a +b)/2;
	return resultado;
}
void encabezado(void)
{
	printf("Programador: Juan Antonio\n");
	printf("Grupo: 1CM\n");
	printf("Ingenieria en Sistemas Computacionales\n");
	printf("--------------------------------------\n");
}
