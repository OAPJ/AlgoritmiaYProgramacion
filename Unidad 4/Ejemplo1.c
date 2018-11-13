#include <stdio.h>
#include <stdlib.h>
#define NUM 8


int main() {
	int nums[NUM], i, total=0;
	for(i=0;i<NUM;i++){
		printf("Introdusca el numero %d: ", i+1);
		scanf("%d",&nums[i]);
	}
	printf("\nLista de numeros:\n");
	for(i=0; i<NUM; i++){
		printf("%d\n",nums[i]);
		total += nums[i];
	}
	printf("\nLa suma de los numeros es: %d\n", total);
	
	system("PAUSE");
	return 0;
}
