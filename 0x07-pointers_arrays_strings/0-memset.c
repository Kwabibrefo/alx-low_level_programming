#include "main.h"

/**
 * _memset - entry point
 * @n: var
 * @s: var
 * @b: var
 * return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
