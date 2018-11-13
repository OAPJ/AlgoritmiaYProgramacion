#include <stdio.h>
#include <stdlib.h>
void dimencion();
void valorM1_M2();
void sumar();

int i, n=50, j;
int matriz_1[50][50], matriz_2[50][50], resultados[50][50];

int main() {
	printf("SUMA DE LAS MATRICES\n");
	dimencion();
	valorM1_M2();
	sumar();
	
	system("PAUSE");
	return 0;
}
void dimencion(){
	printf("Dame la dimension de la matriz [n]: ");
	scanf("%d",&n);
	while(n<=1){
		printf("ERROR, dimension incorrecta \n Dame la dimension de la matriz: ");
		scanf("%d",&n);
		
	}
}


void valorM1_M2(){
	srand(time(NULL));
	for(i=0;i<n;i++){
	    for(j=0;j<n;j++){
	    	matriz_1[i][j] = rand()%10;
			matriz_2[i][j] = rand()%10;
	    }
		
	}
}
void sumar(){
	printf("PRIMERA MATRIZ\n");
	for(i=0;i<n;i++){
	    for(j=0;j<n;j++){
	    	printf("%d\t",matriz_1[i][j]);
	    	
	    }
	    printf("\n");
	}
	
	printf("SEGUNDA MATRIZ\n");
	for(i=0;i<n;i++){
	    for(j=0;j<n;j++){
	    	printf("%d\t",matriz_2[i][j]);
	    	
	    }
	    printf("\n");
	}
	printf("RESULTADO\n");
	for(i=0;i<n;i++){
	    for(j=0;j<n;j++){
	    	resultados[i][j]= matriz_2[i][j] + matriz_1[i][j];
	    	printf("%d\t",resultados[i][j]);
	    	
	    }
	    printf("\n");
	}
}
