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
	int k;

	while (i <= 57)
	{
		for (j = 48; j <= 57 ; j++)
		{
			if (j > i)
			{
				for (k = 48; k <= 57; k++)
				{
					if (k > j)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i != '7' || j != '8' || k != '9')
					{
						putchar(',');
						putchar(' ');
					}
				}
				}

			}
		}
		i++;
	}
	putchar('\n');
	return (0);
}
