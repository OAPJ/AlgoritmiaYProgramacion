#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int alumnos[18], totalA, i;
	printf("Total de alumnos: ");
	scanf("%d",&totalA);
	
	for(i=0; i<=totalA; i=i+1){
		printf("Dame la edad del alumno: ", i+1);
		scanf("%d",&alumnos[i]);
	}
	
	printf("De que alumno quieres su edad: ");
	scanf("%d",&i);
	printf("La edad %d es: %d",i, alumnos[i-1]);
	
	
	return 0;
}
