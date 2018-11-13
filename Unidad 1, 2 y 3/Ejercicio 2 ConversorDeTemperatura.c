#include <stdio.h>
#include <stdlib.h>
float convertir_C_F(float a);
float convertir_F_C(float b);
float convertir_C_K(float a2);
float convertir_K_C(float c);
float convertir_K_F(float c2);
float convertir_F_K(float b2);
float pedirGrados_C();
float pedirGrados_F();
float pedirGrados_K();


int main() {
	char obc;
	float Fah, Cen, Kel, F, C, K;
	float Fah2, Cen2, Kel2, F2, C2, K2;
	printf("Elige una de las siguientes conversiones\n ");
	printf("a) Grados Centigrados a Grados Fahrenheit\n");
	printf("b) Grados Fahrenheit a Grados Centigrados\n");
	printf("c) Grados Centigrados a Grados Kelvins\n");
	printf("d) Grados Kelvins a Grados Centigrados\n");
	printf("e) Grados Kelvins a Grados Fahrenheit\n");
	printf("f) Grados Fahrenheit a Grados Kelvins\n");
	scanf("%c",&obc);
	
	if(islower(obc)==0){
	   obc = tolower(obc);
    }
	
	switch(obc){
		case 'a':
			C =pedirGrados_C();
			Fah= convertir_C_F(C);
			printf("Los grados Fahrenheit son: %g\n",Fah);
			break;
			
		case 'b':
			F = pedirGrados_F();
			Cen= convertir_F_C(F);
			printf("Los grados Centigrados son: %g\n",Cen);
			break;
			
		case 'c':
			C2 = pedirGrados_C();
			Kel= convertir_C_K(C2);
			printf("Los grados Kelvin son: %g\n",Kel);
			break;
			
		case 'd':
			K = pedirGrados_K(); 
			Cen2= convertir_K_C(K);
			printf("Los grados Centigrados son: %g\n",Cen2);
			break;
			
		case 'e':
			K2 = pedirGrados_K();
			Fah2= convertir_K_F(K2);
			printf("Los grados Fahrenheit son: %g\n",Fah2);
			break;
			
		case 'f':
			F2 = pedirGrados_F();
			Kel2= convertir_F_K(F2);
			printf("Los grados Kelvin son: %g\n",Kel2);
			break;
	}
	system("PAUSE");
	return 0;
}
float pedirGrados_C(){
	float C;
	printf("Introduce los grados Centigrados: ");
	scanf("%g",&C);
	return C;
}
float pedirGrados_F(){
	float F;
	printf("Introduce los grados Fahrenheit: ");
	scanf("%g",&F);
	return F;
}
float pedirGrados_K(){
	float K;
	printf("Introduce los grados Kelvins: ");
	scanf("%g",&K);
	return K;
}
float convertir_C_F(float a){
	float F;
	F = 1.8 * a + 32;
	return F; 
}
float convertir_F_C(float b){
	float C;
	C = (b - 32) * 5/9;
	return C;
}
float convertir_C_K(float a2){
	float K;
	K = a2 +  273;
	return K;
}
float convertir_K_C(float c){
	float C;
	C = 273 - c;
	return C;
}
float convertir_K_F(float c2){
	float F;
	F = 1.8 * (c2 - 273) + 32;
	return F;
}
float convertir_F_K(float b2){
	float K; 
	K = (b2 - 32) /1.8 + 273;
	return K;
}
