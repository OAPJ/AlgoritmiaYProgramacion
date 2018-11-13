#include <stdio.h>
#include <stdlib.h>



int main() {
	int **p;
	int n,m,i,j,k;
	do{
		printf("\nCuantas filas?: ");
		scanf("%d",&n);
	}while(n<=1);
	p=(int ***)malloc(n * sizeof(int *));
	if(p==NULL){
		printf("Insificiente espacio de memoria");
		exit(-1);
	}
	for(i=0;i<n;i++){
		printf("Numero de elementos de fila %d: ",i+1);
		scanf("%d",&m);
		p[i]=(int *)malloc(m * sizeof(int*));
		if(p[i]==NULL){
			printf("Insuficiente espacio de memoria");
			exit(-1);
		}
		for(j=0;j<m;j++){
			printf("Elemnto [%d][%d]: ",i+1,j+1);
			scanf("%d",&p[i][j]);
		}
		printf("\nElemtos de la fila &d:\n",i+1);
		for(k=0;k<m;k++){
			printf("%d ",*(*(p+i)+k));
			
		}
	}
	for(i=0;i<n;i++)
		free(p[i]);
	free(p);
	return 0;
}
