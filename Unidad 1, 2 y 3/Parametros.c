#include <stdio.h>
#include <stdlib.h>
//void demo1(int valor);
//void incrementar(int *a);
void intercambio(int *x, int *y);

/*int main()
{
	int n=10;
	printf("Antes de llamar a Demo1, n=%d\n",n);
	demo1(n);
	printf("despues de llamar demo1, n=%d\n",n);
	return 0;
	
}
void demo1(int valor){
	printf("Dentro de demo1, valor=%d\n",valor);
	valor=999;
	printf("dentro de demo1, valor=%d\n",valor);

}  
//incremento
int main(){
	printf("/////////////////////////////////////);
	int var1=1;
	incrementar(&var1);
	printf("Valor incrementado: %d\n",var1);
	system("PAUSE");
	return 0;
}
void incrementar(int *a){
	*a=*a+1;
	return;
}*/
// intercambio
int main(){
	int i=3;
	int j=50;
	printf("i=%d y j=%d\n",i,j);
	
	intercambio(&i,&j);
	printf("i=%d y j=%d\n",i,j);
	system("PAUSE");
	return 0;
}
void intercambio(int *x, int *y){
	int aux;
	aux=*x;
	*x=*y;
	*y=aux;
	return;
}

