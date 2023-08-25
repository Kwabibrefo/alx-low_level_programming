#include "main.h"

/**
 * _strcmp - entry
 * @s1: string one
 * @s2: sring two
 * Return: Return nun
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*s1 == *s2  && *s1 != '\0')
	{
		s1++;
		s2++;
	}
	i = *s1 - *s2;
	return (i);
}
