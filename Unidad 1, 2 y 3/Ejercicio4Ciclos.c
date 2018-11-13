#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int i,j,l,k,n;
	for(l=0;l<=10;l++){
	    for(k=10;k>=l;k--)
		printf(" ");
		for(n=0;n<l;n++)
		printf("*");
		printf("\n");
		}
	printf("\n");
	for(i=1;i<=10;i++){
		for(j=1;j<=10-i;j++)
		printf("*");
		printf("\n");
		}
	system("PAUSE");
	return 0;	 
}
