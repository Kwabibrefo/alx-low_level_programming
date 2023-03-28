#include <stdio.h>

/**
 * _strlen - entry point
 * @s: some pointer
 * Return value: return nothing
 */

int _strlen(char *s),
{
	while (*s != 0)
	{
		_putchar(*s);
		*s++;
	}

}
