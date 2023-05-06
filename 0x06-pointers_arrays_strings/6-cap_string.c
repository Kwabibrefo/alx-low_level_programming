#include "main.h"

/**
 * cap_string - pointer to function
 * @n: pointer to argument
 * Return: n
 */

char *cap_string(char *n)
{
	int a = 1;

	if (n[0] >= 'a' && n[0] <= 'z')
	{
		n[0] = n[0] - 32;
	}
	while (n[a] != '\0')
	{
		if ((n[a - 1] == ' ' || n[a - 1] == '\n'
		|| n[a - 1] == '\t' || n[a - 1] == ','
		|| n[a - 1] == ';' || n[a - 1] == '!'
		|| n[a - 1] == '?' || n[a - 1] == '"'
		|| n[a - 1] == '(' || n[a - 1] == ')'
		|| n[a - 1] == '{' || n[a - 1] == '}'
		|| n[a - 1] == '.')
		&& (n[a] >= 'a' && n[a] <= 'z'))
		{
			n[a] = n[a] - 32;
		}
		a++;
	}
	return (n);
}
