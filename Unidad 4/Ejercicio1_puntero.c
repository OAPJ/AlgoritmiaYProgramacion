#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
	char cad[21], *ptr;
	int lon;
	puts("\nIntroduce una linea de texto: ");
	gets(cad);
	lon=strlen(cad);
	ptr= (char *)malloc((lon+1) * sizeof(char));
	strcpy(ptr,cad);
	printf("ptr--> %s\n\n",ptr);
	free(ptr); 
	
	return 0;
}
