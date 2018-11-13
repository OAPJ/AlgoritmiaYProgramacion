#include <stdio.h>
#include <stdlib.h>
int menu();
float sacarSuma(float n1, float n2);
float sacarResta(float n1, float n2);
float sacarMultiplicacion(float n1, float n2);
float sacarDivicion(float n1, float n2);
float pedirDato();


int main() {
	
	int opc;
	opc=menu();
	do{
	
	switch(opc){
		case 1:{
			float suma, n1, n2, op;
			n1 = pedirDato();
			n2 = pedirDato();
			suma = sacarSuma(n1,n2);
			printf("La suma es: %g\n",suma);
			system("PAUSE");
			op= menu();
			break;
		}
		case 2:{
		    float resta, n1, n2;
		    n1 = pedirDato();
			n2 = pedirDato();
			resta= sacarResta(n1,n2);
			printf("La resta es: %g\n",resta);
			break;  
		}
		case 3:{
		    float divicion, n1, n2;
		    n1 = pedirDato();
			n2 = pedirDato();
			divicion=sacarDivicion(n1,n2);
			printf("La divicion: %f\n",divicion);
			break;  
		}
		case 4:{
		    float multiplicacion, n1, n2;
		    n1 = pedirDato();
			n2 = pedirDato();
			multiplicacion = sacarMultiplicacion(n1,n2);
			printf("La multipliacion es: %f\n",multiplicacion);
			break;  
		}
	}//switch
  }
  	while(opc > 0 && opc<5);
  
	return 0;
}

int menu() {
	system("cls");
	int opc;
	printf("Elegir una obcion\n");
	printf("1) suma\n");
	printf("2) resta\n");
	printf("3) divicion\n");
	printf("4) multiplicacion\n");
	scanf("%d",&opc);
	
	return opc;
}
float sacarSuma(float n1, float n2){
	float sum;
	sum = n1 +n2;
	return sum;
}
float sacarResta(float n1, float n2){
	float res;
	res = n1- n2;
	return res;
}
float sacarMultiplicacion(float n1, float n2){
	float mul;
	mul = n1 * n2;
	return mul;
}
float sacarDivicion(float n1, float n2){
	float div;
	div = n1 / n2;
	return div;
}
float pedirDato(){
	float n;
	printf("Dame un numero: ");
	scanf("%g",&n);
	return n;
}
