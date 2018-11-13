#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
	char *cadena;
	int tam;
	tam=(strlen("Practias")+1) * sizeof(char);
	cadena=(char*)malloc(tam);
	strcpy(cadena,"Practicas ");
	puts("cadena");
	tam +=(strlen("Profesionales\n")+1) * sizeof(char);
	cadena= (char*)realloc(cadena,tam);
	strcat(cadena,"profesionales\n");
	puts(cadena);
	free(cadena);
	return 0;
}
