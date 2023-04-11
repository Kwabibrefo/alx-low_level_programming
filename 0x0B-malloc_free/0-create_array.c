#include "main.h"
#include <stdlib.h>

/**
 * *create_array - functionto allocate size
 * @size: size of array
 * @c: character in array
 * Return: null or pointer toto array
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(size * sizeof(char));
	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	if (sizeof(s) == 0)
	{
		return ('\0');
	}
	else if (s == NULL)
	{
		return ('\0');
	}
	else
	{
		return (s);
	}
}
