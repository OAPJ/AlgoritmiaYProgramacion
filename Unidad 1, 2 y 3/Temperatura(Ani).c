#include <stdio.h>
#include <stdlib.h>



int main() {
	float temp;
	int dias, horas;
	for(dias=1;dias<365;dias++){
		for(horas=1;horas<=24;horas++){
			printf("Da la temperatura del dia %d en la hora %d: ", dias, horas);
			scanf("%g"),&temp;
		}
	}
	
	return 0;
}
