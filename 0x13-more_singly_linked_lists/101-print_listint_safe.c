#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - ...
 * @head: pointer to list
 * Return node number
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t counter = 0;

	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		counter++;
		if (head <= head->next)
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
		head = head->next;
	}
	if (counter == 0)
	{
		printf("NULL\n");
		return (0);
	}
	return (counter);


}
