#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: pointer list
 */

void free_listint2(listint_t **head)

{
	listint_t **current = head;
	listint_t *old;

	if (head == NULL)
	{
		return;
	}

	while (*current != NULL)
	{
		old = *current;
		*current = (*current)->next;
		free(old);
	}
	*head = NULL;
}
