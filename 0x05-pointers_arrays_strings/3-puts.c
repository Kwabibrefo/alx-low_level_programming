#include "main.h"

/**
 * _puts - entry
 * @*str: some array
 * Return: return 0 (success)
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i =  i + 1)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
