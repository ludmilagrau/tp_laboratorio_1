/*
Trabajo Práctico 1 - Ludmila Grau
 */

#include <stdio.h>
#include <stdlib.h>

#include "TP1 operaciones.h"
#include "TP1 otras funciones.h"

int main(void) {
	setbuf(stdout,NULL);

//Declaración de variables

	int opcion;
	int operandoUno;
	int operandoDos;
	int resultadoSuma=0;
	int resultadoResta=0;
	int resultadoMult=0;
	float resultadoDivision=0;
	int resultadoFactorialA=0;
	int resultadoFactorialB=0;
	int flag =0;

//Bucle de menú de opciones
	do
		{

		opcion = menuOpciones();
		switch (opcion) {
//Se solicita al usuario ingreso de operandos
		case 1:
			printf("Usted ha elegido la opción 1. Ingresar 1er operando (A=x)\n");
			printf("Ingrese un operando: ");
			scanf("%d", &operandoUno);
			break;
		case 2:
			printf("Usted ha elegido la opción 2. Ingresar 2do operando (B=y)\n");
			printf("Ingrese un operando: ");
			scanf("%d", &operandoDos);
			break;
//Se realizan las operaciones
		case 3:
			printf("Usted ha elegido la opción 3. Calcular todas las operaciones\n");
			resultadoSuma = Suma(operandoUno, operandoDos, resultadoSuma);
			resultadoResta = Resta(operandoUno, operandoDos, resultadoResta);

			if(operandoDos ==0)
			{
				flag = 1;
			}
			else
			{
			resultadoDivision= Division(operandoUno, operandoDos, resultadoDivision);
			}
			resultadoMult= Multiplicacion(operandoUno, operandoDos, resultadoMult);
			resultadoFactorialA= Factorial(operandoUno, resultadoFactorialA);
			resultadoFactorialB= Factorial(operandoDos, resultadoFactorialB);
			break;

//Se muestran los resultados
		case 4:
			printf("Usted ha elegido la opción 4. Informar resultados\n");
			printf("El resultado de %d + %d es %d\n", operandoUno, operandoDos, resultadoSuma);
			printf("El resultado de %d - %d es %d\n", operandoUno, operandoDos, resultadoResta);

			if(flag == 1)
			{
				printf("No se puede dividir por cero\n");
			}
			else
			{
				printf("El resultado de %d / %d es %f\n", operandoUno, operandoDos, resultadoDivision);
			}
			printf("El resultado de %d * %d es %d\n", operandoUno, operandoDos, resultadoMult);
			printf("El resultado del factorial %d es %d\n", operandoUno, resultadoFactorialA);
			printf("El resultado del factorial %d es %d\n", operandoDos, resultadoFactorialB);
			break;

//Con la opción 5 finaliza el bucle
		case 5:
			printf("Usted ha elegido la opción 5. Salir\n");
			break;

		}
	} while (opcion != 5);

	return 0;
}


