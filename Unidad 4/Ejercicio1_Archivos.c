#include <stdio.h>
#include <stdlib.h>



int main() {
	FILE *pf;
	char c;
	char nom[]="C:\\Users\\JuanAntonio\\Desktop\\hola.txt";
	pf=fopen(nom,"rt");
	if(pf==NULL){
		puts("Error al abrir el archivo.");
		system("PAUSE");
		system("EXIT");
	}
	else{
		puts("Archivo abierto");
		do{
			putchar(c=getc(pf));
		}while(c!= '\n');
	}
	
	system("PAUSE");
	fclose(pf);	
	return 0;
}
