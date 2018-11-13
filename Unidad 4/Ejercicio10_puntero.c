#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Estudiante{
	char nombre[30];
	char sexo;
	int nota;
	
};

int main() {
	struct Estudiante *est;
	int n, nest, ap=0, re=0, nef=0, nem=0;
	float pap, prep, pf, pm;
	printf("Introdusca el numero de estudiantes: ");
	scanf("%d",&nest);
	est=(struct Estudiante *)calloc(nest,sizeof(struct Estudiante));
	if(est==NULL){
		printf("Insuficiente espacio de memoria\n");
		exit(-1);
	}
	else {
		for(n=1;n<=nest;n++){
			printf("Nombre del estudiante: ");
			fflush(stdin);
			gets(est[n].nombre);
			do{
				printf("Sexo(f/m): ");
				fflush(stdin);
				scanf("%c",&est[n].sexo);
			}
			while((est[n].sexo !='f' && est[n].sexo !='F') && (est[n].sexo !='m' && est[n].sexo !='M'));
				if((est[n].sexo =='f') || (est[n].sexo =='F')){
					nef++;	
				}
				
				if((est[n].sexo =='m') || (est[n].sexo =='M'))
					nem++;
				printf("Nota: ");
				scanf("%d",&est[n].nota);
				if((est[n].nota>=0 && est[n].nota<=60))
				    ap++;
				else
				    re++;			
			
		}
	}
	pap=(ap*100)/nest;
	prep=(re*100)/nest;
	pf=(nef*100)/nest;
	pm=(nem*100)/nest;
	printf("Hay %d estudiantes APROBADOS y representan %.2f%%\n",ap,pap);
	printf("Hay %d estudiantes REPROBADOS y representan %.2f%%\n",re,prep);
	printf("Hay %d alumnos de sexo FEMENINO y representan %.2f%%\n",nef,pf);
	printf("Hay %d alumnos de sexo MASCULINO y representan %.2f%%\n",nem,pm);
	free(est);
	return 0;
}
