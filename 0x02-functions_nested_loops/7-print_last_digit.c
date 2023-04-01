#include "main.h"

/**
 * print_last_digit - entry point
 * @n: last digit
 * Return: return n (success)
 */

int print_last_digit(int n)
{
	int x;

	if (n > 0)
	{
		x = (n % 10);
		_putchar(x + '0');
	}
	else
	{
		x = (n % 10) * (-1);
                _putchar(x + '0');
	}
	return (x);
}
