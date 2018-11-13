#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int cubos[5], numero, i;
void pedirValor();
void mostrarValor(int cubos[]);


int main() {
	pedirValor();
	mostrarValor(cubos);
	return 0;
}

void pedirValor(){
	for(i=0;i<5;i++){
		printf("ingresa el valor %d: ",i+1);
		scanf("%d",&numero);
		cubos[i]= pow(numero,3);
	}
}

void mostrarValor(int cubos[]){
	printf("Los cubos son: \n\n");
	for(i=0;i<5;i++){
		printf("%d\n",cubos[i]);
	}
}
