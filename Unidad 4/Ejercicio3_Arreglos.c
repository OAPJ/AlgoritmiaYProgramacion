#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int   m, num, sum, i;
	//int  a[i];
	float s, a[i];
	for(i=0; i<5; i++){
		printf("Dame un numero: ");
		scanf("%f",&a[i]);
		sum=sum+a[i];
	}
	m = sum/5;
	sum=0;
	for(i=0; i<5; i++){
		
		sum=sum + pow((m-a[i]),2);
	}
	sum= sum / 5;
	s = sqrt(sum);
	printf("%f\n\n",s);
	
	system("PAUSE");
	return 0;
}
