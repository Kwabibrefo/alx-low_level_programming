#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - function that concatenates two strings
 * @s1: pointer to string 1
 * @s2: pointer to string 2
 * @n: size of memory
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, j, k;

	p = malloc(n * sizeof(char));
	if (n == 0)
	{
		return (NULL);
	}
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		p[i] = s1[i];
	}
	k = i;
	for (j = 0; k < n; j++)
	{
		p[k] = s2[j];
		k++;
	}
		if (p == NULL)
		{
			p = "";
		}
	p[n] = '\0';
	return (p);
}
