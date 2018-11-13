#include <stdio.h>
#include <stdlib.h>


int main() {
	int n=0, num=0, i=1;
	printf("De cual numero quieres saber su tabla de multiplicar: ");
	scanf("%d",&n);
	for(i;i<=10;i++){
		num= n * i;
		printf("%d por %d: %d\n", n, i, num);
	}
	
	system("PAUSE");
	return 0;
}
