#include <stdio.h>
#include <math.h>
#include "main.h"

/**
 * print_to_98 - increment by 1
 * @n: first variable
 * Return: void
 */

void print_to_98(int n)
{
	int j;

	if (n < 98)
	{
		for (j = n; j <= 98; j++)
		{
			printf("%d", j);
			if (j != 98)
			{
				printf(", ");
			}
		}
	}
	else
	{
		for (j = n; j >= 98; j--)
		{
			printf("%d", j);
			if (j != 98)
			{
				printf(", ");
			}
		}
	}
	putchar('\n');
}
