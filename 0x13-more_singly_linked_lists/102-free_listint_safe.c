#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint_safe - ...
 * @head: pointer to list
 * Return node number
 */

size_t free_listint_safe(listint_t **h)
{
	size_t counter = 0;
	listint_t *current, *next;

	if (h == NULL || *h == NULL)
	{
		return (0);
	
	current = *h;
	}
	
	while (current != NULL)
	{
	       next = current->next;
	       free(current);
	       counter++;
	       if (current <= next)
	       {
		       *h = NULL;
		       break;
	       }
	       current = next;
	}
	return (counter);


}
