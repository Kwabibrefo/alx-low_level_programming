#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_list - frees list
 * @head: ...
 * Return: ...
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		temp = head->next;
		free(temp->str);
		free(temp);
	}
}
