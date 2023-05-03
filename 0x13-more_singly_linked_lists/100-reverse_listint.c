#include "lists.h"
#include <stdlib.h>

/**
 * *reverse_listint - pointer to function for reversing lists
 * @head: pointer to list address
 * Return: pointer tofirst node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *p = NULL, *current = *head, *next;

	while (current != NULL)
	{
		next = current->next;
		current->next = p;
		p = current;
		current = next;
	}
	*head = p;
	return (p);
}
