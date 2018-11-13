#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
float deci;

    printf("Introduzca un numero decimal porfavor");
    scanf("%d", &deci);
    if((deci >=70)&&(deci <=170)) {
     printf("El numero se encuentra dentro de los limites"); 
        }
else{
    printf("El numero no esta dentro de los limites");
    

    }
	
	
	
	return 0;
}
