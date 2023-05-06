#include "main.h"

/**
 * reverse_array - reverse function
 * @a: pointer to array
 * @n: aray size
 * Return: nun
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int b = 0;
	int c = 0;
	int j = n - 1;

	if (n % 2 != 0)
	{
		while (i <= (n - 1) / 2)
		{
			b = a[i];
			c = a[j];
			a[j] = b;
			a[i] = c;
			i++;
			j--;
		}
	}
	else
	{
		while (i < (n - 1) / 2)
		{
			b = a[i];
			c = a[j];
			a[j] = b;
			a[i] = c;
			i++;
			j--;
		}
	}
}
