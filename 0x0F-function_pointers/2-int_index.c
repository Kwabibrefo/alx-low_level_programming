#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * int_index- function with pointer to functions
 * @array: an array
 * @size: size o array
 * @cmp: points to function
 * Return: return nothing
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
		{
			return (i);
		}
	}
	return (-1);
}
