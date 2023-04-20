#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - function with pointer to functions
 * @name: name of person
 * @f: points to function
 * Return: return nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		f(name);
	}
}
