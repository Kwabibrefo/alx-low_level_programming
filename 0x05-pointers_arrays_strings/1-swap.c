#include <stdio.h>

/**
 * swap_int - entry point
 * @a: som pointer
 * @b: some other pointer
 * Return: nothing as usual
 */

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}

