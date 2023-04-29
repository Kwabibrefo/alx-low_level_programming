#include <stdio.h>

/**
 * main - entry poit
 * Description: print combs
 * Return: return 0 (succcess)
 */

int main(void)
{
	int i = 48;
	int j;

	while (i <= 57)
	{
		for (j = 48; j <= 57 ; j++)
		{
			if (j > i)
			{
				putchar(i);
				putchar(j);
				if (i != '8' || j != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
		i++;
	}
	putchar('\n');
	return (0);
}
