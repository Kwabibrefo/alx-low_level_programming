#include  <stdio.h>

/**
 * main - entry point
 * description: print comb of single digit numbers separated by comma and space
 * Return: return 0 (success)
 */

int main(void)
{
	int i = 48;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i < 57)
		{
			putchar(44);
		}
		if (i < 57)
		{
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
