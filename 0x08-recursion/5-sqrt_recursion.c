#include "main.h"

/**
 * _sqrt_recursion - rec fun
 * @n: int
 * Return: square root
 */

int _sqrt(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if(n <= 0)
	{
		return (-1);
	}
	if (i * i == n)
		return (i);
	return (_sqrt(n, i + 1));
}

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

