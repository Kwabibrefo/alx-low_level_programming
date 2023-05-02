#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pop_listint - deletes node
 * @head: pointer to address
 * Return: int
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	temp = *head;
	*head = temp->next;
	n = temp->n;
	free(temp);
	return (n);
}
