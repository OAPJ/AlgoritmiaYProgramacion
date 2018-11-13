#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int n,s=0;
	printf("introduce un numero: ");
	scanf("%d",&n);
	while(n>0){
		s = s + n % 10;
		n = n/10;
	}
	printf("%d\n",s);
	system("PAUSE");
	return 0;
}
