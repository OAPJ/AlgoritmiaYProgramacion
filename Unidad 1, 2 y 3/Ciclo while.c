#include <stdio.h>
#include <stdlib.h>



int main() {
	
	float num, prod;
	prod=1;
	printf("Dame un numero: ");
	scanf("%g",&num);
	
	while(num != 0){
		prod = prod * num;
		printf("Dame un numero: ");
		scanf("%g", &num);
	}
	
	printf("El promedio es: %g\n",prod);
	
	system("PAUSE");
	return 0;
}
