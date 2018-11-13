#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	char x[20][20];//ES UN MATRIZ primero filas despues columnas
	int alum, i;
	printf("Cuantos alumnos hay (max 20): ");
	scanf("%d",&alum);
	for(i=0;i<alum;i++){
		printf("Nombre del alumno %d: ",i+1);
		fflush(stdin); //limpia el buffer de almacenamiento 
		gets(x[i]);//parecido a scanf
	}
	for(i=0;i<alum;i++){
		printf("Alumno %d nombre: %s\n",i+1,x[i]);
	}
	
	getch();// como pausa
	return 0;
}
