#include <stdio.h>
#include <math.h>

/**
 * times_table - computes times table
 * Description: prints times table
 * Return: void
 */

void times_table(void)
{
	int i = 0;
	int j = 0;
	int k = 0;

	for (i = 0; i <= 9; i++)
	{
		while (j <= 9)
		{
			k = i * j;
			printf("%d, ", k);
			j++;
		}
		putchar('\n');
	}
}
