#include "main.h"

/**
 * _strlen - entry point
 * @s: some pointer
 * Return: return length (succcess)
 */

int _strlen(char *s)
{
	int i;
	int l = 0;

	for (i = 0; s[i] != 0; i++)
	{
		l++;
	}
	return (l++);
}
