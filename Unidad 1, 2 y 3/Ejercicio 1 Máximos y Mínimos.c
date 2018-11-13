#include <stdio.h>
#include <stdlib.h>

void ValorMaximo(float a, float b, float c);
void ValorMinimo(float a, float b, float c);
void DosSonIgualesUnoMenor(float a, float b, float c);
void DosSonIgualesUnoMayor(float a, float b, float c);
void TresSonIguales(float a, float b, float c);

void TresSonIguales(float a, float b, float c);

int main() {
	
	float a,b,c;
	printf("Dame 3 n\243meros: \n");
	printf("El primero: ");
	scanf("%f",&a);
	printf("El segundo: ");
	scanf("%f", &b);
	printf("El tercero: ");
	scanf("%f", &c);
	ValorMaximo(a,b,c);
	ValorMinimo(a,b,c);
	DosSonIgualesUnoMenor(a,b,c);
	DosSonIgualesUnoMayor(a,b,c);
	TresSonIguales(a,b,c);
	
	
	system("PAUSE");
	return 0;
}

void ValorMaximo(float a, float b, float c){
	
	if (a>b && a>c){printf("El mayor es: %f\n",a);}else{printf("");}
	if (b>a && b>c){printf("El mayor es: %f\n",b);}else{printf("");}
	if (c>a && c>b){printf("El mayor es: %f\n",c);}else{printf("");}
	return ;
}

void ValorMinimo(float a, float b, float c){
	
	if (a<b && a<c){printf("El menor es: %f\n",a);}else{printf("");}
	if (b<a && b<c){printf("El menor es: %f\n",b);}else{printf("");}
	if (c<a && c<b){printf("El menor es: %f\n",c);}else{printf("");}
	return ;
}

void DosSonIgualesUnoMenor(float a, float b, float c){
	if(a==b && a>c){printf("%f y %f son iguales \n",a,b);}
		else{printf("");}
	if(a==c && a>b){printf("%f y %f son iguales \n",a,c);}
		else{printf("");}
	if(b==c && b>a){printf("%f y %f son iguales \n",b,c);}
		else{printf("");}
	return;
}

void DosSonIgualesUnoMayor(float a, float b, float c){
	if(a==b && a<c){printf("%f y %f son iguales \n",a,b);}
		else{printf("");}
	if(a==c && a<b){printf("%f y %f son iguales \n",a,c);}
		else{printf("");}
	if(b==c && b<a){printf("%f y %f son iguales \n",b,c);}
		else{printf("");}
	return;
}

void TresSonIguales(float a, float b, float c){
	if(a==b && b==c){printf("Todos son iguales :v\n");}else{printf("");}
	return;
}

