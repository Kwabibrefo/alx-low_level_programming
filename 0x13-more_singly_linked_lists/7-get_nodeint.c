#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *get_nodeint_at_index - pointer to function
 * @head: pointer to list
 * @index: position of node
 * Return: address to nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int counter = 0;

	while (current != NULL && counter < index)
	{
		current = current->next;
		counter++;
	}
	if (counter == index)
		{
			return (current);
		}
	else
	{
		return (NULL);
	}
}
