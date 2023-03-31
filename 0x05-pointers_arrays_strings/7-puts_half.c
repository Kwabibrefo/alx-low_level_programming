#include "main.h"
#include <stdio.h>

/**
 * puts_half -  entry point
 * @str: variable
 * Return: nothing
 */

void puts_half(char *str)
{
	int i;
	int j = 0;
	int n;

	for (i = 0; str[i] != '\0'; i++)
	{
		j++;
	}
	n = i / 2;
	if (n % 2 != 0)
	{
		for (i = n -0.5; i < j; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = n; i < j; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
