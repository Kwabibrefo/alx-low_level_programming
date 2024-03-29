#include "lists.h"

/**
 * get_dnodeint_at_index - Nth node
 * @head: pointer to head node
 * @index: int
 * Return: dlistint_t
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counta = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	while (head != NULL)
	{
		if (index == counta)
		{
			return (head);
		}
		counta++;
		head = head->next;
	}
	return (NULL);
}
