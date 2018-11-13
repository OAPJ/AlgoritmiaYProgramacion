#include <stdio.h>
#include <stdlib.h>


int i, t_libros, t_librosprest; 
struct biblioteca{
		char titulo[20], autor[40];
		int i, t_libros, t_librosprest;
		int cod, can_inv, cant_prest;
	}bibliotecas[1000];
	
int total_libros_prestados(biblioteca bibliotecas[], int n);

int main() {

	

	printf("Total de libros (max 1000): ");
	scanf("%d",&t_libros);
	bibliotecas[t_libros];
	for(i=0;i<=t_libros;i++){
		printf("Dame los datos del titulo",i+1);
		printf("Titulo: ");
		gets(bibliotecas[i].titulo);
		printf("Autor del libro: ");
		gets(bibliotecas[i].autor);
		printf("Codigo del libro: ");
		scanf("%d",&bibliotecas[i].cod);
		printf("cantidad de ejemplares: ");
		scanf("%d",&bibliotecas[i].can_inv);
		printf("Cantidad de ejemplares prestados: ");
		scanf("%d",&bibliotecas[i].cant_prest);
	}
	t_librosprest=total_libros_prestados(bibliotecas[], t_libros);
	printf("El total de libros prestados es %d",t_librosprest);
	
	system("PAUESE");
	return 0;
}

	
	

int total_libros_prestados(biblioteca bibliotecas[], int n){
	int i, cant=0;
	for(i=0;i<n;i++){
		cant=cant + 1;
		return cant;
	}
}

