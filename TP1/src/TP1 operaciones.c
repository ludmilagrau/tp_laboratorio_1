/*
 * TP1 funciones.c
 *
 *  Created on: 22 sep. 2021
 *      Author: Sony
 */
#include "TP1 operaciones.h"

int Suma(int operandoUno, int operandoDos, int resultadoSuma)
{

	resultadoSuma = operandoUno + operandoDos;

	return resultadoSuma;
}

int Resta(int operandoUno, int operandoDos, int resultadoResta)
{
	resultadoResta= operandoUno - operandoDos;

	return resultadoResta;
}

float Division(int operandoUno, int operandoDos, float resultadoDivision)

{
	if(operandoDos == 0)
	{
		resultadoDivision=0;
	}
	else
	{
	resultadoDivision= operandoUno/operandoDos;
	}

	return resultadoDivision;
}

int Multiplicacion(int operandoUno, int operandoDos, int resultadoMult)
{
	resultadoMult= operandoUno*operandoDos;

	return resultadoMult;
}

int Factorial(int operando, int resultadoFactorialA)
{

	if(operando == 0)
	{
		resultadoFactorialA = 1;
	}
	else
	{
		resultadoFactorialA = operando * Factorial(operando-1, resultadoFactorialA);
	}

	return resultadoFactorialA;
}
