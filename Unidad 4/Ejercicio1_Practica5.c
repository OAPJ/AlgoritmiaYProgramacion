#include <stdio.h>
#include <stdlib.h>
void Ordena_Seleccion(int Arreglo[]);


int main() {
	int Arreglo[5]={25,13,31,17,2}, i=0;
	Ordena_Seleccion(Arreglo);
	while (i<=4){
		printf("[%d]\n",Arreglo[i]);
		i=i+1;
		
	}
	
	system("PAUSE");
	return 0;
}

void Ordena_Seleccion(int Arreglo[]){
	int i=0,j=0, temp=0;
	while(i<=3){
		j=i+1;
		while(j<=4){
			if(Arreglo[i]>Arreglo[j]){
				temp=Arreglo[i];
				Arreglo[i]=Arreglo[j];
				Arreglo[j]=temp;
			}
			else{
				j=j+1;
			}
		}
		i=i+1;
	}
	
	
}
