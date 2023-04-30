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
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s", h->len, h->str);
		}
		h = h->next;
		i++;
	}
	return (i);
}