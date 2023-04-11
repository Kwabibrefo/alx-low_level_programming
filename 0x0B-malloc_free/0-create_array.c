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
	if (size == 0)
	{
		return (NULL);
	}

	if (s == NULL)
	{
		return (NULL);
	}
	while (i < size && size != 0)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
