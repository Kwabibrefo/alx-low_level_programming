#include <stdio.h>

/**
 * main - entry point
 * Description: pring all base 16 numerals
 * Return: return 0 (success)
 */

int main(void)
{
	int i;

	for (i = 0; i < 16; i++)
	{
		if (i < 10)
			putchar(i + '0');
		else
			putchar(i + 39 + '0');
	}
	putchar('\n');
	return (0);
}
