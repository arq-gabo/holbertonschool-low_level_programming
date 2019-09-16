#include "lists.h"

/**
 * *get_dnodeint_at_index - gets the node at an index
 * @head: head of the list
 * @index: index to get
 * Return: pointer to the index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (index > 0 && head->next)
	{
		head = head->next;
		index--;
	}
	return (index > 0 ? NULL : head);
}
