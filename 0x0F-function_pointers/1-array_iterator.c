#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator- function with pointer to functions
 * @array: an array
 * @size: size o array
 * @actio: points to function
 * Return: return nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || action == NULL)
	{
		return;
	}
	i = 0;
	while (i < (int) size)
	{
		action(array[i]);
			i++;
	}
}
