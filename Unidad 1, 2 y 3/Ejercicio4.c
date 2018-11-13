#include <stdio.h>
#include <stdlib.h>

/* ESTE PROGRAMA SUMA LOS DOS PRECIOS MAS CHICOS
DE TRES PELICULAS */

int main() {
	float pelicula1=0;
	float pelicula2=0;
	float pelicula3=0; 
	float suma;
	
	printf("Introduce el precio de la 1ra pelicula: ");
	scanf("%f", &pelicula1);
	printf("Intoduce el 2do precio: ");
	scanf("%f", &pelicula2);
	printf("Introduce el 3er precio: ");
	scanf("%f", &pelicula3);
	
	if(pelicula1<pelicula2){
		if(pelicula1<pelicula3){
			if(pelicula2<pelicula3){
				suma= pelicula1 + pelicula2;
				printf("La suma de pelicula 1 + pelicula 2 es: %f\n",suma);
			}
			else{
				suma = pelicula1 + pelicula3;
				printf("La suma de la pelicula 1 y 3 es: %f\n",suma);
				
			}
		}
		
	    
	}
	else{
		if(pelicula2<pelicula3){
			if(pelicula1<pelicula3){
				suma=pelicula2+ pelicula1;
				printf("La suma de la pelicula 2 mas la 1 es: %f\n",suma);
			}
			else{
				suma= pelicula2 + pelicula3;
				printf("La suma de la pelicula 2 mas la 3 es: %f\n",suma);
			}
		}
		else{
			if(pelicula1<pelicula2){
				suma= pelicula3 + pelicula1;
				printf("La sua de la pelicula 3 mas la 1 es: %f\n",suma);			
			}
			else{
				suma=pelicula3+pelicula2;
				printf("La suma de la pelicula3 mas la 2 es: %f\n",suma);
			}
		}
	
	} 	
	
	system("PAUSE");
	return 0;
}
