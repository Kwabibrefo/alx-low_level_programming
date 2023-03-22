#include "main.h"

/**
 * print_alphabet - entry point
 * Description: alphabets print out
 * Return: return 0 (success)
 */

void print_alphabet_x10(void)
{
	int i = 97;
	
	while (i <= 122)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
