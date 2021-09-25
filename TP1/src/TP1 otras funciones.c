/*
 * TP1 otras funciones.c
 *
 *  Created on: 24 sep. 2021
 *      Author: Sony
 */

#include "TP1 otras funciones.h"



int menuOpciones(void)
{
	int opcion;

	printf("Elija una opción \n");
	printf("1. Ingresar 1er operando (A=x)\n");
	printf("2. Ingresar 2do operando (B=y)\n");
	printf("3. Calcular todas las operaciones\n");
	printf("4. Informar resultados\n");
	printf("5. Salir\n");
	scanf("%d" , &opcion);

	return opcion;
}
