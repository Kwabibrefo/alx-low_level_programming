#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - print linked list elements
 * @h: pointer list
 * Return: i
 */

size_t print_list(const list_t *h)
{
	size_t i  = 0;

	while (h != NULL)
	{
		printf("[%d] %s\n", h->len,h->str ? h->str : "(nil)");
		h = h->next;
		i++;
	}
	return (i);
}
