#include <stdio.h>
#include <stdlib.h>


int main() {
	int edad;
	int *ptr_edad;
	ptr_edad = &edad;
	*ptr_edad = 50;
	printf("%d\n",edad);
	printf("%d\n", *ptr_edad);
	return 0;
}
