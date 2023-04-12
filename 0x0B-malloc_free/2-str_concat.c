#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - function
 * @s1: char
 * @s2: char
 * Return: always 0
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j;
	int h, o;
	char *p;

	o = 0;
	h = 0;
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		;
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		;
	}
	p = malloc((i + j + 1) * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
	}
	while (s1[h] != '\0')
	{
		p[h] = s1[h];
		h++;
	}
	for (o = 0; s2[o] != '\0'; o++)
	{
		p[h] = s2[o];
		h++;
	}
	p[h + 2] = '\0';
	return (p);
}
