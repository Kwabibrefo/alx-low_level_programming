#include "main.h"

/**
 * print_most_numbers - entry
 * Description: print as usual
 * Return: return 0 (success)
 */

void print_most_numbers(void)
{
	int i = 0;

	for (i = 48; i >= 57; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i);
		}
	_putchar('\n');
	}
}
