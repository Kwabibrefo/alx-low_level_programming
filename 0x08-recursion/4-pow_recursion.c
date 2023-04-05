#include "main.h"

/**
 * _pow_recursion -recursion fun
 * @x: int
 * @y: power of int
 * Return: int to the power of int
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
