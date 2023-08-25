#include "main.h"

/**
 * *_strncat - entry point
 * @dest: variable
 * @src: variable
 * @n: variable
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int l;

	for (l = 0; dest[l] != '\0'; l++)
	{
		;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[l + i] = src[i];
	}
	dest[l + i] = '\0';
	return (dest);
}
