#include <stdio.h>
#include <stdlib.h>
void declararArreglo();
void ordenar(int arreglo_numeros[]);
void arregloOrdenado(int arreglo_numeros[]);

int arreglo_numeros[20];
int auxiliar, i, j;

int main() {
	declararArreglo();
	ordenar(arreglo_numeros);
	arregloOrdenado(arreglo_numeros);
	
	system("PAUSE");
	return 0;
}
void declararArreglo(){
	srand(time(NULL));
	printf("ARREGLO DESORDENADO\n");
	for(i=0;i<20;i++){
		arreglo_numeros[i]=rand();
		printf("%d\n", arreglo_numeros[i]);
	}
}
void ordenar(int arreglo_numeros[]){
	for(i=0;i<=19;i++){
		for(j=i+1;j<=20;j++){
			if(arreglo_numeros[i]>arreglo_numeros[j]){
				auxiliar=arreglo_numeros[i];
				arreglo_numeros[i]=arreglo_numeros[j];
				arreglo_numeros[j]=auxiliar;
			}
		}
	}
}
void arregloOrdenado(int arreglo_numeros[]){
	printf("\nARREGLO ORDENADO\n");
	for(i=0;i<20;i++){
		printf("%d\n",arreglo_numeros[i]);
	}
}
