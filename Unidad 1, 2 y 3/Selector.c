#include <stdio.h>
#include <stdlib.h>
int esNon(int n);
int codigoAscii(char Ca);



int main() {
	int A;
	printf("Que tipo de dato vas a introcudir:\n");
	printf("1.- Un Caracter\n");
	printf("2.- Un Numero\n");
	scanf("%d", &A);
	if(A==1){
		char Ca;
		int Ascii;
	    printf("Intorduce un caracter: ");
	    scanf("%c", &Ca);
		Ascii = codigoAscii(Ca);
		printf("El codio en Ascii es: %d",Ascii);
	}
	if(A==2){
		int N, Par;
		printf("Intoduce un nuemro: ");
		scanf("%d", & N);
		Par = esNon(N);
		if(Par==0){
			printf("El numero %d es par", N);
		}
		else{
			printf("El numero %d es impar", N);
		}
	
		
	}
	return 0;
}
int esNon(int n){
	int uwu, x;
	uwu = n % 2;
	if(uwu==0){
		x=0;
	}
	else{
		x = 1;
	}
	return x;
}
int codigoAscii(char Ca){
	int nc=0;
	scanf("%c\n",&Ca);
	nc=Ca;
	return nc;
}

