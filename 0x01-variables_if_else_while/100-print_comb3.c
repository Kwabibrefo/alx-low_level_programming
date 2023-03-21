#include <stdio.h>

/**
 * main - entry poit
 * Description: print combs
 * Return: return 0 (succcess)
 */

int main(void)
{
	int i = 0;
	int j = 0;

	for (i = 0; i <= 9; i++)
	for (j = 0 ; j <=9; j++)
	putchar(i + '0');
	putchar(j + '0');
	for (j <= 9)
	{	putchar(32);
	}
	return (0);
}
