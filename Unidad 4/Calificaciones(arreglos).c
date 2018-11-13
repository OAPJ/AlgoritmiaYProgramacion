#include <stdio.h>
#include <stdlib.h>


int main() {
	int i, n, suma;
	float promedio;
	
	
	printf("Cuantas calificacion son: ");
	scanf("%d",&n);
	int nums[n];
	for(i=0;i<n;i++){
		printf("Calificaciones %d: \n",i+1);
		scanf("%d",&nums[i]);
		//suma= suma + nums[i];
		suma += nums[i];
	}
	
	promedio = suma / n;
	printf("El promedio es: %g", promedio);
	return 0;
}
