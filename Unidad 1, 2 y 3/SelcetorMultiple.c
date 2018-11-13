#include <stdio.h>
#include <stdlib.h>



int main() {
	char n;
	printf("Ingrese una letra de la A - F: ");
	scanf("%s",&n);
	//saber si es minusula la letra
	//if(islower(n)!= 0)
	if(islower(n)==0){
		n = tolower(n);//convierte de mayuscula a minuscula
	}
		
	switch(n){
		case 'a':
			printf("Excelente!");
			break;
	    case 'b':
	    	printf("Notable");
	    	break;
	    case 'c':
	    	printf("Aprobado");
	    	break;
	    case 'd':
	    	printf("Aprobado");
	    	break;
	    case 'f':
	    	printf("No suficiente");
	    	break;
	    default:
	    	printf("No es posible la nota");
	}
	return 0;
}
