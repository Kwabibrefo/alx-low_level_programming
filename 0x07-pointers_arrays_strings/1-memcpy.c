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
	
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (*dest);
}
