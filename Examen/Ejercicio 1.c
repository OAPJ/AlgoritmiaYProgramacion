#include <stdio.h>
#include <stdlib.h>

int DiasFaltantes (int a, int b);
int main (){
	int DiaActual,MesActual,AnioActual,SumaActual;
	int suma,suma2, suma3, Dia,Mes,Anio,edad,bi;
	
	printf("Cu\240l es la fecha actual?\n");
	printf("Introduce el d\241a: ");
	scanf("%d",&DiaActual);
	if(DiaActual<=0){printf("Error! No v\240lido"); return 0;}
	printf("Introduce el mes (1-12): ");
	scanf("%d",&MesActual);
	if(MesActual<=0){printf("Error! No v\240lido"); return 0;}
	printf("Introduce el a\244o: ");
	scanf("%d",&AnioActual);
	if(AnioActual<=0){printf("Error! No v\240lido"); return 0;}
	
	printf("Cu\240l es tu fecha de nacimiento?\n");
	printf("Introduce el d\241a: ");
	scanf("%d",&Dia);
	if(Dia<=0){printf("Error! No v\240lido"); return 0;}
	printf("Introduce el mes (1-12): ");
	scanf("%d",&Mes);
	if(Mes<=0){printf("Error! No v\240lido"); return 0;}
	printf("Introduce el a\244o: ");
	scanf("%d",&Anio);
	if(Mes<=0){printf("Error! No v\240lido"); return 0;}
	
  suma=DiasFaltantes (Dia,Mes);
  SumaActual=DiasFaltantes (DiaActual,MesActual);
  edad=AnioActual-Anio-1;
  suma2=365*edad+suma;
  bi=edad/4;
  suma3 = suma2+365-SumaActual+bi+1; 
  printf("Tienes %d d\241as viviendo en este mundo\n",suma3);
  printf("Han pasado %d a\244os bisiestos",bi);
	
	return 0;
}

int DiasFaltantes (int a, int b){
	int suma;
	switch(b){
  	case 1://Enero 31 días
  		 suma =365- a;
  		 
  		break;
  	case 2:
  		
		  	//Febrero 28 días
  		suma =365- 31 - a;
  		
  		
		  break;
  	case 3:
  		 //Marzo 31 días
  		suma =365- 59 - a;
  		
  		
		  break;
  	case 4:
  		 //Abril 30 días
  		suma =365- 90 - a;
  		
  		
		  break;
  	case 5:
  		 //Mayo 31 días
  		suma =365- 120 - a;
  	
  		
		  break;
  	case 6:
  		 //Junio 30 días
  		suma =365- 151 - a;
  		 
  		
		  break;
  	case 7:
  		 //Julio 31 días
  		suma =365- 181 + a;
  
  		
		  break;
  	case 8:
  		 //Agosto 31 días
  		suma =365-212 - a;
  	
  		
		  break;
  	case 9:
  		 //Septiembre 30 días
  		suma =365- 243 - a;
  		 
  		
		  break;
  	case 10:
  		 //Octubre 31 días
  		suma =365- 273 - a;
  	
  		
		  break;
  	case 11:
  		 //Noviembre 30
  		suma =365- 304 - a;
  		
		  break;
  	case 12:
  		 //Diciembre 31
  		suma =365- 334 - a;
  	
  		
		  break;
  		
  	default:
  	printf("Error! Mes no v\240lido"); return 0;
  }
}
