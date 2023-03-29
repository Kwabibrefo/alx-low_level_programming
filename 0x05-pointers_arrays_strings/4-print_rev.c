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
		l++;
	}
	for (c = l++-1; c >= 0; c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}
