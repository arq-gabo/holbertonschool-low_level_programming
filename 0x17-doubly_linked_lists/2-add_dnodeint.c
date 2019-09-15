#include "lists.h"

/**
 *
 *
 *
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{

	dlistint_t *temp;

	temp = *head;
	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	temp->n = n;
	temp->prev = NULL;
	temp->next = *head;
	*head = temp;

	return (temp);
}
