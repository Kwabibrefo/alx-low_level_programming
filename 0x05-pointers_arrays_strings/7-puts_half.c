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
		;
	}
	if (i % 2 < 1)
	{
		n = (i / 2);
		for (j = n; str[j] != '\0'; j++)
		{
			_putchar(str[j]);
		}
	}
	else
	{
		n = ((i - 2) / 2);
		for (j = n; str[j] != '\0'; j++)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
