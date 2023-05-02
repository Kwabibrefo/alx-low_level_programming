#include "lists.h"
#include <stdlib.h>
/**
 * *add_nodeint_endi - pointer to function that adds new node
 * @head: pointer to pointer of first node
 * @n: variable
 * Return: node address
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *last_node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		return (NULL);
	}

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
	}
	else
	{
		last_node =*head;
		while (last_node->next != NULL)
		{
			last_node = last_node->next;
		}
		last_node->next = node;
	}
	return (node);
}
