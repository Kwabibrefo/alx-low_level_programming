#include "lists.h"

/**
 * dlistint_len - count number of nodes in  linked list
 * @h: pointer to the beginning of  linked list
 *
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t a;

	for (a = 0; a != NULL; a++)
		h = h->next;
	return (a);
