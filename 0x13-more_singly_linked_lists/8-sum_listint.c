#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * sum_listint - sums listints
 * @head: pointer to list
 * Return: int
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
