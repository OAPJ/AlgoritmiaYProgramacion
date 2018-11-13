#include <stdio.h>
#include <stdlib.h>
float menu();

int main() {
	int n,a, NumeroRandom,i,j;
	menu();
	printf("De que tamaño son las matrices A y B");
	scanf("%d",&n);
	if(n>=10){
		printf("No se puede");
		break;
	}
	a= menu();
	float A[n][n], B[n][n];
	for(i;i<n;i++){
		for(j;j<n;i++){
			srand(time(NULL));
			NueroRandom = rand() %99;
			B[i][j]=NumeroRandon;
		}
	}
	i=0;
	j=0;
	for(i;i<n;i++){
		for(j;j<n;j++){
		    srand(time(NULL));
			NueroRandom = rand() %99;
			A[i][j]=NumeroRandon;	
		}
		
	}
	
	
	
	return 0;
}
float menu(){
	int opc;
	system("cls");
	printf("Que quieres hacer");
	printf("1.- Suma");
	printf("2.- Resta");
	printf("3.- Multiplicacion");
	printf("4.- Salir");
	scanf("%d",&opc);
	return opc;
}
