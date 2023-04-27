#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list_len - returns number of linked elements
 * @h: pointer to linked list
 * Return: number of linked elemements
 */

size_t list_len(const list_t *h)
{
	long counter;
	const list_t *temp;
	counter = 0;

	temp = h;
	while (temp)
	{
		counter++;
		temp = temp -> next;
	}
	return (counter);
}
