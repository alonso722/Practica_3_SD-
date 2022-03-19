/* Programa random_local.c que incluye unicamente el programa main */
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "random_local.h"

int main(int argc, char *argv[])
{
int misemilla, itera, i;
	if(argc != 3) {
	printf("Uso: %s semilla iteraciones\n", argv[0]);
	exit(1);
}
	printf ("Argumento 1: %s\n",argv[1]);
	printf ("Argumento 2: %s\n",argv[2]);
	misemilla = (long)atoi(argv[1]);
	itera = atoi(argv[2]);
	inicializa_random(misemilla);
	for(i = 0; i < itera; i++)
		printf("%d : %f\n", i, obtiene_siguiente_random());
	exit(0);
}
