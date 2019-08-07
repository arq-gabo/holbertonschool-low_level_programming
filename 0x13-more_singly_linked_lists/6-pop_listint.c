#include "lists.h"

/**
 * pop_listint - deletes the head node of a list
 *
 * @head: pointer to list
 *
 * Return: head node data
 */
int pop_listint(listint_t **head)
{

	listint_t **current = head;
	listint_t *old;
	int val;

	if (*head == NULL)
	{
		return (0);
	}
	old = *current;
	*current = (*current)->next;
	val = old->n;
	free(old);
	return (val);
}
