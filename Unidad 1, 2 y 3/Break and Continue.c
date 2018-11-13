#include <stdio.h>
#include <stdlib.h>



int main() {
	int i;
	for(i=0; i<10; i++){
		if (i==7) {
			continue;
		}
		printf("i: %d\n",i);
	}
	return 0;
}

