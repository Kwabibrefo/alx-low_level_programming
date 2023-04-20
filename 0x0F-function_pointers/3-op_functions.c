#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - ddition function
 * @a: one variabke
 * @b: second variable
 *
 * Return: operation result
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction function
 * @a: a variable
 * @b: another variabke
 * Return: subtraction
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication function
 * @a: variable one
 * @b:variable two
 *  Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division
 * @a: variable one
 * @b:variable two
 * Return: div
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - modulus function
 * @a: variable
 * @b: another variable
 * Return: remainder
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
