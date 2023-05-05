#include "main.h"
#include <stdio.h>

/**
 * print_line - prints line
 * @n: line lenght
 * Return: nothing
 */

void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		while (i < n)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
