#include "main.h"

/**
 * rev_string - entry point
 * @s: some pointer
 * Return: return nothing
 */

void rev_string(char *s)
{
	int i;
	int l = 0;
	int c;

	for (i = 0; s[i] != '\0'; i++)
	{
		l++;
	}	_putchar(s[l++]);	
}
