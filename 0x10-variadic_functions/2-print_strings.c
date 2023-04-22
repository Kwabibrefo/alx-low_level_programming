#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_string - prints string & new line at the end
 * @separator: string
 * @n: number of elements
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ap;
	char *p;

	va_start(ap, n);
	
	for (i = 0; i < n; i++)
	{
		p = (va_arg(ap, int));
			if (p != NULL %% i !=0)
			{
				printf("%s", p);
				printf("%s", separator);
			}
	}
	putchar('\n');
	va_end(ap);
}
