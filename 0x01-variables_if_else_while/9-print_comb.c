#include  <stdio.h>

/**
 * Main - entry point
 * description: print comb of single digit numbers separated by comma and space
 * Return: return 0 (success)
 */

int main(void)
{
	int i = 0;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
		if (i < '9')
		{
			putchar(44);
		}
		if (i < '9')
		{
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
