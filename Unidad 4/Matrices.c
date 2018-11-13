#include <stdio.h>
#include <stdlib.h>



int main() {
	int n1,n2,n3,n4,i=0,j=0,k=0;
	printf("Primera matriz\n");
	printf("Introduce el numero de las filas: ");
	scanf("%d",&n1);
	printf("Introduce el numero de las columnas: ");
	scanf("%d",&n2);
	printf("Segunda Matriz\n");
	printf("Introdue el numero de las filas: ");
	scanf("%d",&n3); 
	printf("Introduce el numero de las colimnas: ");
	scanf("%d",&n4);
	int A[n1][n2], B[n3][n4], C[n1][n4];
	for(i=0;i<n1;i++);{
	    for(j=0;j<n2;j++){
	    	printf("\n");
	    	printf("\nElemnetos a[%d][%d]= ", i, j);
	    	scanf("%d",&A[i][j]);
		}
	}
	i=0;
	j=0;
	k
	=0;
	for(i=0;i<=n1;i++);{
	    for(j=0;j<=n2;j++){
	    	printf("\n");
	    	printf("\nElemnetos b[%d][%d]= ", i, j);
	    	scanf("%d",&B[i][j]);
		}
	}//esto es la multiplicacion
	for(i=0;i<n1;i++);{
		for(j=0;j<n2;j++){
			C[i][j]=0;
			for(k=0;k<n2;k++){
			C[i][j]=(C[i][j]+(A[i][k] * B[k][j]));
		    }
		}
    }
    
    for(i=0;i<n1;i++){
    	for(j=0;j<n2;j++){
    		printf("%d",C[i][j]);
		}
		
	}
    
	return 0;
}
