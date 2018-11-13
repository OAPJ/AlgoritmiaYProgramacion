#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char *c, B[121];
	puts("Introduce una cadena de caractes: ");
	gets(B);
	c = (char*)calloc(strlen(B)+1,sizeof(char));
	strcpy(c,B);
	printf("\nc---> %s\n",c);
	free(c);
	return 0;
}
