#include "main.h"

/**
 * _abs - entry point
 * Description: absolute
 * Return: return 0 (success)
 */

int _abs(int)
{
	int n = 0;
			
	for (n < 0)
	{
		return (-1 * n);
	}
	else
	{
		return (n);
	}
	return (0);
}
