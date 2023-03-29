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
	int e;
	for (i = 0; str[i] != '\0'; i++ )
	{
		e = d++;
	}
	for (c = 0; str[c] <= str[e - 1]; c = c + 2)
	{
		_putchar(str[c]);
	}
	_putchar('\n');
}
