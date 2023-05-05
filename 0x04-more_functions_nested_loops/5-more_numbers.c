#include "main.h"

/**
 * more_numbers - ent
 * Description: more numbs
 * Return: return o (success)
 */

void more_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		char j = '0';
		char k = '1';
		char l = '0';

		while (j <= '9')
		{
			_putchar(j);
			j++;
		}
		while (k == '1')
		{
			while (l <= '4')
			{
				_putchar(k);
				_putchar(l);
				l++;
			}
			k++;
		}
		_putchar('\n');
		i++;
	}
}
