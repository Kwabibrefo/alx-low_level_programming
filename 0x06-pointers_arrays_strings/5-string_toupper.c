#include "main.h"

/**
 * string_toupper - pointer to function
 * @n: pointer to argument
 * Return: n
 */

char *string_toupper(char *n)
{
	int a = 0;

	while (n[a] != '\0')
	{
		if (n[a] >= 97 && n[a] <= 122)
		{
			n[a] = n[a] - 32;
		}
		a++;
	}
	return (n);
}
