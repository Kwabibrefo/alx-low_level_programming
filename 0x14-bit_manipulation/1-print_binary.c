#include <stdio.h>
#include "main.h"
#include <limits.h>

/**
 * print_binary - print binary
 * @n: number to convert
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int current;
	int num_bits = sizeof(unsigned long int) * CHAR_BIT;

	for (i = num_bits - 1; i >= 0; i--)
	{
		current = n >> i;
		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
		{
			_putchar('0');
		}
	}
	if (!count)
	{
		_putchar('0');
	}
}
