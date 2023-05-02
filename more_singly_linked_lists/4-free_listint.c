#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint - frees linked elements
 * @h - pointer to list
 * @head: pointer
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
