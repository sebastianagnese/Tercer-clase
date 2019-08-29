#include <stdio.h>
#include <stdlib.h>
int getNumero();

int main(void)
{
	int numero;
	int max;
	int min;
	int retry = 0;

	printf("Ingrese un valor maximo: ");
	scanf("%d",&max);
	printf("\nIngrese un valor minimo: ");
	scanf("%d",&min);

	getNumero(&numero,&max,&min,&retry);

	printf("\nEl valor ingresado es: %d",numero);

	if (getNumero == 0)
	{
		printf("\nEl usuario no ingreso valores erroneos.");
	}
	else
	{
		printf("\nCantidad de reintentos: %d",retry);
	}

	return 0;
}

int getNumero(int *num,int *nMax,int *nMin,int *iRetry)
{
	int numero;
	int max = *nMax;
	int min = *nMin;
	int i = *iRetry;
	int returnV = 0;

	printf("\nIngrese un numero: ");
	scanf("%d",&numero);

	while (numero < min || numero > max)
	{
		printf("\nValor fuera de parametros, reingrese un numero: ");
		scanf("%d",&numero);
		returnV = -1;
		i++;
	}

	*num = numero;
	*iRetry = i;

	return returnV;
}
