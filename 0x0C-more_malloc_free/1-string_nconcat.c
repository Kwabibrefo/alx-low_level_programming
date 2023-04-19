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
	
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (num < 0)
		return (NULL);
	if (num >= _strlen(s2))
		num = _strlen(s2);

	len = _strlen(s1) + num + 1;

	ptr = malloc(sizeof(*p) * len);
	if (p == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		p[i] = s1[i];
	for (j = 0; j < num; j++)
		p[i + j] = s2[j];
	ptr[i + j] = '\0';

	return (p);
}
