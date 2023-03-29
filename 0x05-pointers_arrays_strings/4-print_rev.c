#include "main.h"

/**
 * print_rev - entry point
 * @s: some pointer
 * Return: return nothing
 */

void print_rev(char *s)
{
	int i;
	int l = 0;
	int c;

	for (i = 0; s[i] != '\0'; i++)
	{
		c = l++;
	}
	while (c >= 0)
	{
		_putchar(s[c]);
		c--;
	}
	_putchar('\n');
}
