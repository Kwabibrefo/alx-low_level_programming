#include "main.h"

/**
 * *_strncpy - entry point
 * @dest: var
 * @src: var
 * @n: var
 * Return: nothing
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	n = 0;
	while (src != '\0')
	{
		dest[i] = src[n];
		i++;
		n++;
	}
	dest[i] = '\0';
}
