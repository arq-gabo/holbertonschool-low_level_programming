#include "lists.h"

/**
 * dlistint_len - Gets length of the list
 * @h: the pointer of the head of the list
 * Return: Number of the items of the linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t a;

	for (a = 0; h; a++)
	{
		h = h->next;
	}
	return (a);
}
