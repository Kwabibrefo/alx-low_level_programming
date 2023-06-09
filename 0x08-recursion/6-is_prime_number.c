#include "main.h"

/**
 * is_prime_number - rec fun
 * @n: int
 * Return: one or zero
 */

int is_prime_number(int n)
{
	return (_prime(n, 2));
}

/**
 * _prime - rec fun
 * Return: zero or one
 * @i: int
 * @n: int
 */

int _prime(int n, int i)
{
	if (n < 2)
	{
		return (0);
	}
	if ((n % i == 0) && (i < n))
	{
		return (0);
	}

	if (n % i == 0 && (i == n))
		return (1);
	return (_prime(n, i + 1));
}
