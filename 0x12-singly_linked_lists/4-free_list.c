#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_list - frees linked elements
 * @h - pointer to list
 * @head: pointer
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current->str)
		free(current);
	}
}
