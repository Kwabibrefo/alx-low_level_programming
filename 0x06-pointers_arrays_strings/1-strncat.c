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

	for (i = 0; dest[i] != '\0'; i++)
	{
		;
	}
	n = 0;
	while (src[n] != '\0')
	{
		dest[i] = src[n];
		i++;
		n++;
	}
	return (dest);
}
