#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int main() {
	FILE *fpt; 
	char c;
	fpt=fopen("muestra.txt","w");
	do{
		putc(toupper(c=getchar()),fpt);
	}
	while(c != '\n');
	fclose(fpt);
	return 0;
}
