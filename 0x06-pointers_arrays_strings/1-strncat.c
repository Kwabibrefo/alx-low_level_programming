#include "main.h"

/**
 * *_strncat - entry point
 * @dest: variable
 * @src: variable
 * n: variable
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int o;

	for (i = 0; dest[i] != '\0'; i++)
	{
		;
	}
	for (n = 0; src[n] != '\0'; n++)
	{
		;
	}
	o = 0;
	while (i <= n - 1)
	{
		dest[i] = src[o];
		i++;
		o++;
	}
	return (dest);
}
