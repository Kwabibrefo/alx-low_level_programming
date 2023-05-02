#include "main.h"

/**
 * rev_string = reverses string
 * @s: pointer to string
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	int o = 0;
	char *k = s;

	while (s[i] != '\0')
		i++;
	while (s[j] != '\0')
	{
		k[j] = s[j];
		j++;
	}

	while (o != -1 )
	{
		s[o] = k[i - 1];
		i--;
		o++;
	}
	s[j] = '\0';
}
