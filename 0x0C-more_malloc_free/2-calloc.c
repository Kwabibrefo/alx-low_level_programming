#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
  * _calloc - memory allocation.
  * @nmemb: number of elements in array.
  * @size: size  of array.
  *
  * Return: NULL
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (nmemb * size); i++)
	{
		*((char *)(ptr) + i) = 0;
	}
	return (p);
}
