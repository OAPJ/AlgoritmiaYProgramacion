#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int EsTriangulo(float a, float b, float c);
float SumarNumeros(float a, float b);
float AreaTriangulo(float a, float b, float c);
void TrianguloEquilatero(float a, float b ,float c);
void TrianguloIsosceles(float a, float b, float c);
void TrianguloEscaleno(float a, float b, float c);




int main() {
	float a,b,c;
	int t;
	
	printf("¡Bienvenido al Programa!\n");
	printf("Dame tres lados de la figura: \n");
	printf("Primer lado: ");
	scanf("%f", &a);
	printf("Segundo lado: ");
	scanf("%f", &b);
	printf("Tercer lado: ");
	scanf("%f", &c);
	
	t=EsTriangulo(a,b,c);
	
	switch(t){
	
	case 1: TrianguloEquilatero(a, b, c);
			TrianguloIsosceles(a,b,c);
			TrianguloEscaleno(a,b,c);
			printf("El \240rea es: %f u\375\n", AreaTriangulo(a,b,c));
	break;
	
	default: printf("No es un tri\240ngulo :c\n");
	
	}
	
	system("PAUSE");
	return 0;
}

float SumarNumeros(float a, float b){
	float s;
	s = a+b;
	return s; 
}

int EsTriangulo(float a, float b, float c){
	int t;

	if(SumarNumeros(a,b)>c && SumarNumeros(a,c)>b && SumarNumeros(b,c)>a ){t++;}
	else{printf("");}
	

	return t;

}

float AreaTriangulo(float a, float b, float c){
	float s, Area; 
	s=(a+b+c)/2;
	Area = sqrt(s*(s-a)*(s-b)*(s-c));
	return Area;
}

void TrianguloEquilatero(float a, float b ,float c){
	
	if(a==b && a==c && b==c ){printf("Es un tri\240ngulo equil\240tero O: \n");}else{printf("");}

}

void TrianguloIsosceles(float a, float b, float c){

	
	if(a==b && a!=c && b!=c){printf("Es un tri\240ngulo is\242sceles :3\n");}else{printf("");}

	if(a==c && a!=b && c!=b){printf("Es un tri\240ngulo is\242sceles :3\n");}else{printf("");}
	
	if(b==c && b!=a && c!=a){printf("Es un tri\240ngulo is\242sceles :3\n");}else{printf("");}
	
	return;
}

void TrianguloEscaleno(float a, float b, float c){
	if(a!=b && a!=c && b!=c){printf("Es un tri\240ngulo escaleno *-*\n");}else{printf("");}
	return;
}

