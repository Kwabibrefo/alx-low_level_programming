#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints string & new line at the end
 * @separator: string
 * @n: number of elements
 * Return: void
 */

void print_all(const char * const format, ...);
{
	unsigned int i = 0;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		if (format == s)
		{
			char *p;
			
			p = (va_arg(ap, char *));
		}
			if (p != NULL)
			{
				printf("%s", p);
				if (separator != NULL && i != (n - 1))
				{
					printf("%s", separator);
				}
			}
			else
			{
				printf("(nil)");
			}
	}
	putchar('\n');
	va_end(ap);
}
