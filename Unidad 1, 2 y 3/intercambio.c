#include <stdio.h>
#include <stdlib.h>
int intercambio(int a, int b);
int intercambio2(int a, int b);
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n1,n2,n3,n4;
	printf("Intrpduce un nuemor: \n");
	scanf("%d",&n1);
	printf("Introduce otro numero: \n");
	scanf("%d",&n2);
	n3 = intercambio(n1,n2);
	n4 = intercambio2(n1,n2);
	printf("El primer nuemro es %d y el segundo nuemero es %d\n",n4,n3);
	return 0;
}
int intercambio(int a, int b){
	int x;
	x = a;
	b = a;
	x = b;
	return x;

}
int intercambio2(int a,int b){
	int y;
	y = b;
	a = b;
	y = a;
	return y;
}
