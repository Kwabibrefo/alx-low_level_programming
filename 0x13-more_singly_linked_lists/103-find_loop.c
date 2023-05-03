#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * find_listint_loop - finds the first node in list
 * @head: pointer to the head node
 * Return: node address
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slo = head, *fast = head;

	while (fast != NULL && fast->next != NULL)
	{
		slo = slo->next;
		fast = fast->next->next;
		if (slo == fast)
		{
			while (head != slo)
			{
				head = head->next;
				slo = slo->next;
			}
			return (head);
		}
	}
	return (NULL);
}
