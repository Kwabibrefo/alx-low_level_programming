#include "main.h"

/**
 * puts2 - entry
 * @str: some variable
 * Return: ret none
 */

void puts2(char *str)
{
	int i, j = 0;

	for (i = 0; str[i] != '\0'; i++)
		;
	while (j <= i)
	{
		_putchar(str[j]);
		j += 2;
	}

	_putchar('\n');
}
