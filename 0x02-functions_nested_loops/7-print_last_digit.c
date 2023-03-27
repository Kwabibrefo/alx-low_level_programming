#include "main.h"

/**
 * print_last_digit - entry point
 * @n: last digit
 * Return: return n (success)
 */

int print_last_digit(int n)
{
	n = (n % 10);
	_putchar(n + '0');
	return (n);
}
