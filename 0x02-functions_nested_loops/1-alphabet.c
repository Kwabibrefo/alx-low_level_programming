#include "main.h"

/**
 * print_alphabet - entry point
 * Description: alphabets print out
 * Return: return 0 (success)
 */

void print_alphabet(void)
{
	int i = 97;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
