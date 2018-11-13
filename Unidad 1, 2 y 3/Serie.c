#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main() {
	int n,i , x=0, y=0;
	printf("Introduce un numero: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		x = pow(i,i);
		y = y + x;
		
	}
	printf("%d\n",y);
	
	system("PAUSE");	
	return 0;
}
