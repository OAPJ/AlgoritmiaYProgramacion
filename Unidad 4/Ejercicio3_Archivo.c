#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define VERDADERO 1
typedef struct{
	int mes;
	int dia;
	int anio;
}fecha;

typedef struct{
	char nombre[80];
	char calle[80];
	char ciudad[80];
	int num_cuenta;
	int tipo_cuenta;
	float anteriorsaldo;
	float nuevolsaldo;
	float pago;
	fecha ultimopago;
}registro;

registro leerpantalla(registro cliente);
void escribirarchivo(registro cliente);
FILE *fpt;

int main() {
	int indicador = VERDADERO;
	registro cliente;
	/*abrir un archivo nuevo solo para escritura*/
	fpt = fopen("registro.dat","w");
	
	printf("SISTEMA DE FACTURACION DE CLIENTE - INICIALIZACION \n\n");
	printf("Introduzca la fecha actual (mm/dd/aaaa): ");
	scanf("%d/%d/%d",&cliente.ultimopago.mes,
	                 &cliente.ultimopago.dia,
					 &cliente.ultimopago.anio);
	fflush(stdin);
	cliente.nuevolsaldo=0;
	cliente.pago=0;
	cliente.tipo_cuenta = 'A';
	
	while(indicador){
		printf("\nNombre (introducir \'FIN\' para terminar): ");
		scanf("%[^\n]",cliente.nombre);
		fprintf(fpt,"\n%s\n",cliente.nombre);
		
		if(strcmp(cliente.nombre,"FIN")==0)
		   break;
		cliente= leerpantalla(cliente);
		escribirarchivo(cliente);
	} 
	fclose(fpt);
	return 0;
}
registro leerpantalla(registro cliente){
	printf("Calle: ");
	fflush(stdin);
	scanf("%[^\n]",&cliente.calle);
	fflush(stdin);
	printf("Ciudad: ");
	fflush(stdin);
	scanf("%[^\n]",&cliente.ciudad);
	fflush(stdin);
	printf("Numero de cuenta: ");
	fflush(stdin);
	scanf("%d",&cliente.num_cuenta);
	fflush(stdin);
	printf("saldo actual: ");
	fflush(stdin);
	scanf("%f",&cliente.anteriorsaldo);
	fflush(stdin);
	return(cliente);
}
void escribirarchivo(registro cliente){
	fprintf(fpt,"%s\n",cliente.calle);
	fprintf(fpt,"%s\n",cliente.ciudad);
	fprintf(fpt,"%d\n",cliente.num_cuenta);
	fprintf(fpt,"%c\n",cliente.tipo_cuenta);
	fprintf(fpt,"%.2f\n",cliente.anteriorsaldo);
	fprintf(fpt,"%.2f\n",cliente.nuevolsaldo);
	fprintf(fpt,"%.2f\n",cliente.pago);
	fprintf(fpt,"%d/%d/%d\n",cliente.ultimopago.mes,
	                         cliente.ultimopago.dia,
							 cliente.ultimopago.anio);
	return ;
}
