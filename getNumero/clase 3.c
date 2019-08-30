#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

int main(void)
{
	int numero;
	int max;
	int min;
	int retry;
	int ret;

	printf("Ingrese un valor maximo: ");
	scanf("%d",&max);
	printf("\nIngrese un valor minimo: ");
	scanf("%d",&min);
	printf("\nIngrese un tope de reintentos: ");
	scanf("%d",&retry);

	ret = getNumero(&numero,max,min,retry);

	printf("\nEl valor ingresado es: %d",numero);

	if (ret == 0)
	{
		printf("\nFin del programa");
	}
	else if (ret == -1)
	{
		printf("\nEl usuario reingreso un valor");
	}

	return 0;
}


