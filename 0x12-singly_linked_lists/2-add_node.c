#include "lists.h"
#include <stdlib.h>
/**
 * *add_node - pointer to function that adds new node
 * @head: pointer to pointer of first node
 * @str: variable
 * Return: node address
 */

list_t *add_node(list_t **head, const char *str);
{
	list_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		return (NULL);
	}

	node->str = str;
	node->next = *head;
	*head = node;

	return (node);
}
