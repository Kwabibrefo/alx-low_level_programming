#include <stdio.h>

/**
 * main - entry poit
 * Description: print combs
 * Return: return 0 (succcess)
 */

int main(void)
{
	int i = 0;
	
	while(i <= 9)
	{
		int j;
		for(j = 0; j <= 9; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			putchar(44);
			putchar(32);
		}
		i++;
	}
	return (0);
}
