#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>



int main() {
	
	int c, nusuario, nmaq;
	c=0;
	srand(time(NULL)); nmaq = rand () %100 + 1;
	do { 
		printf("Dame un numero entero: \n");
		scanf("%d",&nusuario);
		if(nusuario>nmaq){
		    printf("Tu numero es mayor al mio\n");
		}
		if(nusuario<nmaq) {
		    printf("Tu numero es menor al mio\n");
		}
		c=c+1;
	}
	while (nusuario != nmaq && c<5);
	if (nusuario == nmaq) printf("Felicidades lo lograste en %d intentos\n",c);
	else printf("Suerte para la proxima\n El numero era: %d\n",nmaq);
	getch();
	system("PAUSE");
	return 0;
}
