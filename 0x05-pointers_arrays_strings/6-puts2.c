#include "main.h"

/**
 * puts2 - entry
 * @str: some variable
 * Return: ret none
 */

void puts2(char *str)
{
	int i;
	int c;
	int d = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		c = i++;
	}
	while (d <= c || str[d] == '\0')
	{
		_putchar(str[d]);
		d = d + 2;
	}

	_putchar('\n');
}
