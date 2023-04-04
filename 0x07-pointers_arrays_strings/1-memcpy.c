#include "main.h"

/**
 * *_memcpy - entry point
 * @dest: pointer to char
 * @src: pointer to char
 * @n: size
 * Return: *dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	unsigned int l;

	for (l = 0; dest[l] != '\0'; l++)
	{
		;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[l + i] = src[i];
	}
	return (dest);
}
