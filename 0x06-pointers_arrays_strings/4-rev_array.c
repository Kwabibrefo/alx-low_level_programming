#include "main.h"

/**
 * reverse_array: reverse function
 * @a: pointer to array
 * @n: aray size
 * Return: nun
 */

void reverse_array(int *a, int n)
{
	int i, j = 0;
	int b;
	int c;

	while ( i != n - 1)
	{
		i++;
	}
	while (i > j)
	{
		b = a[j];
		c = a[i];
		a[i] = b;
		a[j] = c;
		i--;
		j++;
	}
}
