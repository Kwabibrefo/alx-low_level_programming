#include "main.h"

/**
 * _isdigit - entry pint
 * @c: char
 * Return: return 0 (success)
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
