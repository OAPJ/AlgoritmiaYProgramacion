#include <stdio.h>
#include <stdlib.h>
char pedirCadena();
char cambiar(char cadena[]);
char cadena[50];
int i;


int main() {
	pedirCadena();
	cambiar(cadena);
	printf("%s\n",cadena);
	
	system("PAUSE"); 
	return 0;
}
char pedirCadena(){
	printf("Dame la cadena para transformala a arreglo: ");
	gets(cadena);
}
char cambiar(char cadena[]){
	for(i=0;i<50;i++){
		switch(tolower(cadena[i])){
			case 'a':{
				cadena[i]='e'; 
				break;
			}
			case 'e':{
				cadena[i]='u'; 
				break;
			}
			case 'i':{
				cadena[i]='o'; 
				break;
			}
			case 'o':{
				cadena[i]='i'; 
				break;
			}
			case 'u':{
				cadena[i]='a'; 
				break;
			}
			default:cadena[i]=tolower(cadena[i]);
		}
	}
}
