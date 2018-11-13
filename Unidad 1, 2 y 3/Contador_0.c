#include <stdio.h>
#include <stdlib.h>


int main() {
	int i=1, n=0, cont_ceros=0, num=0;
	printf("Dame la cantidad de numeros: \n");
	scanf("%d",&n);
	for(i; i<=n; i++){
		printf("Ingrsa un numero: ");
		scanf("%d",&num);
		if(num==0){
			cont_ceros= cont_ceros + 1;
		}
	}
	printf("Cantidad de ceros: %d",cont_ceros);
	
	return 0;
}
