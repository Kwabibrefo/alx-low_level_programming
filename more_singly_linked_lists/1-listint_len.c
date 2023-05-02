#include "lists.h"
#include <stdio.h>

/**
 * listint_len - counts inked elements
 * @h - pointer to list
 * Return: count
 */

size_t listint_len(const listint_t *h)
{
	size_t counter = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		counter++;
		current = current->next;
	}
	return (counter);
}
