#include <stdio.h>
#include <stdlib.h>



int main() {
	
	float n1=0;
	float nomina=0;
	int i=1;
	for(i; i<=10; i++)
	{
		printf("Dame sueldo\n");
		scanf("%g",n1);
		nomina= nomina + n1;
	}
	printf("La nomina es: %g",nomina);
	

	
	system("PAUSE");
	return 0;
}
