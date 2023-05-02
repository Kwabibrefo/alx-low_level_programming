#include "lists.h"
#include <stdlib.h>
/**
 * *add_nodeint - pointer to function that adds new node
 * @head: pointer to pointer of first node
 * @n: variable
 * Return: node address
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		return (NULL);
	}

	node->n = n;
	node->next = *head;
	*head = node;

	return (node);
}
