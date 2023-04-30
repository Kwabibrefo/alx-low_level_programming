#include <stdio.h>

/**
 * jack_bauer - function that prints time
 * Description: print time
 * Return: return nothing
 */

void jack_bauer(void)
{
	int i = 0;
	int j = 0;

	for (i = 0; i < 100; i++)
	{
		for (j = 0; j < 100; j++)
		{
			if (i <= j)
			{
				putchar(i / 10 + '0');
				putchar(i % 10 + '0');
				putchar(' ');
				putchar(j / 10 + '0');
				putchar(j % 10 + '0');
				if (i != 99 || j != 99)
				{
					putchar(',');
					putchar(' ');
					putchar('\n');
				}
			}
		}
	}
}
