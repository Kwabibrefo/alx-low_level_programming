#include "main.h"

/**
 * *_strcpy - funstion pointer
 * @dest: copy
 * @src: string to be copied
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
			i++;
	}
	dest[i] = '\0';
	return (dest);
}
