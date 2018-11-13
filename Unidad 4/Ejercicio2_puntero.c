#include <stdio.h>
#include <stdlib.h>



int main() {
	int *ptr,nelem,i;
	printf("Cuantos elementos: ");
	scanf("%d",&nelem);
	ptr=(int *)malloc(nelem * sizeof(int));
	if(ptr==NULL){
		printf("Insuficiente Espacio de Memoria");
		exit(-1);
	}
	for(i=0;i<nelem;i++){
		printf("Elemento [%d]: ",i+1);
		scanf("%d",(ptr+i));
		
	}
	printf("\n***ELEMENTOS DEL ARRAY***\n");
	for(i=0;i<nelem;i++){
		printf("%d ",*(ptr+i));
	}
	free(ptr);
	return 0;
}
