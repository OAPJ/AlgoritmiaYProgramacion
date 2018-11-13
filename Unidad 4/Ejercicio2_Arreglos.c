#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
	
	int i, n;
	
	printf("Cuantos elementos son: ");
	scanf("%d",&n);
	
	int arr[n],arr2[n];
	
	for(i=0;i<n;i=i+1){
		
		printf("Dame el elemento %d: ",i+1);
		scanf("%d",&arr[i]);
		arr2[i]= pow(arr[i], 2);
		
	
	}
	
	for(i=0;i<n;i=i+1){
		
		printf("El numero %d elevado al cuadrado es: %d\n",arr[i],arr2[i]);
	}
	
    system("PAUSE");
	return 0;
}
