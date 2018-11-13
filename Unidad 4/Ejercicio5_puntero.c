#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float *pf=NULL;
	int num,i;
	do{
		printf("Cuantos datos en el array? ");
		scanf("%d",&num);
		
	}while(num<1);
	pf=(float *)calloc(num,sizeof(float));
	if(pf==NULL){
		puts("Error en la asignacion de memoria");
		exit(-1);
	}
	printf("\nIntroduce %d valor tipo decimal\n",num);
	for(i=0;i<num;i++){
		printf("Dato[%d]: ",i+1);
		scanf("%f",&pf[i]);
		
	}
	printf("\nEn el array hay %d elementos\n",num);
	for(i=0;i<num;i++){
		printf("%.2f",pf[i]);
		printf("\n\n");
		free(pf);
	}
	return 0;
}
