#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint2 - frees linked elements
 * @h - pointer to list
 * @head: pointer
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
	{
		return();
	}

	while (*head != NULL)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
	}
	*head = NULL;
}
