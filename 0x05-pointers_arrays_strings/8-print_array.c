#include <stdio.h>

/**
 * print_array - entry point
 * @a: some var
 * @n: some var
 * Return: return 0 (success)
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d, ", a[i]);
		i++;
	}
	printf("\n");
}
