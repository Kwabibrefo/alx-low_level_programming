#include "main.h"

/**
 * * print_alphabet_x10 - entry point
 * * Description: alphabets print out
 * * Return: return 0 (success)
 * */

void print_alphabet_x10(void)
{
	int i = 0;
	int k = 0;

	while (k <= 10)
	{
		for (i = 0; i <= 10; i++)
		{
			_putchar(i + '0');
		}
	_putchar('\n');
	}
}
