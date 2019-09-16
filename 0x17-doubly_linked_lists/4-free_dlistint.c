#include "lists.h"

/**
 * free_dlistint - free a linked list
 * @head: head of the list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		tmp->prev = NULL;
		tmp->next = NULL;
		free(tmp);
	}
}
