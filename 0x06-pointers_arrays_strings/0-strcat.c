#include "main.h"

/**
 * _strcat - entry point
 * @*dest: char
 * @*src: char
 * Return: new dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
