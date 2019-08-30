/*
 * utn.c
 *
 *  Created on: 29 ago. 2019
 *      Author: alumno
 */
#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

int getNumero(int *pNum,int max,int min,int iRetry)
{
	int numero;
	int i = 1;
	int returnV = 0;

	/*printf("\nTEST RETRY Qs: %d",iRetry);*/

	printf("\nIngrese un numero: ");
	scanf("%d",&numero);

	while(iRetry >= i)
	{
		if (numero <= min || numero >= max)
		{
			printf("\nValor fuera de parametros, reingrese un numero: ");
			scanf("%d",&numero);
			i++;
			returnV = -1;
		}
		else
		{
			break;
		}
	}

	iRetry = i;
	*pNum = numero;

	return returnV;
}
