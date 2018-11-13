#include <stdio.h>
#include <stdlib.h>

int main() {
	long long int numero, falta,NumeroInvertido,residuo;
	printf("Introduce un n\243mero: ");
	scanf("%d",&numero);
	
	falta=numero;
	NumeroInvertido=0;
	
	while(falta!=0)
	{
 		residuo=falta%10;
 		NumeroInvertido=NumeroInvertido*10+residuo;
 		falta=falta/10;
	}

	if(NumeroInvertido==numero){
	printf("El n\243mero es pal\241ndromo\n");
    }else{
	printf("El n\243mero no es pal\241ndromo\n");
	 }
	return 0;
}


