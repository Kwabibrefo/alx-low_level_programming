#include <stdio.h>
#include "lists.h"

/**
 * print_listint - print list elements
 * @h: pointer to list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *current = h;
	size_t counter = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		counter++;
	}
	return (counter);
}
