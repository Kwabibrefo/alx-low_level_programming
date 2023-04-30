#include <stdio.h>
#include <math.h>
#include "main.h"

/**
 * print_to_98 - increment by 1
 * @n: first variable
 * @j: second variable
 * Return: void
 */

void print_to_98(int n)
{
	int j;

	j = n;

	while (j <= 98)
	{
		printf("%d", j);
		if (j < 98)
		{
			printf(",");
		}
		j++;
	}
	putchar('\n');
}
