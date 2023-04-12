#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - function
 * @str: pointer to string
 * REturns: null or pointer
 */

char *_strdup(char *str)
{
	char *s;
	int i;
	int j;

	i = 0;
	j = 0;
	if (str == NULL)
	{
		return (NULL);
	}
	for (j = 0; str[j] != '\0'; j++)
	{
		;
	}
	s = malloc((j + 1) * sizeof(char));
	while (str[i] != '\0')
	{
		s[i] = str[i];
		i++;
	}
	if (s == NULL)
	{
		return (NULL);
	}

	return (s);
}
