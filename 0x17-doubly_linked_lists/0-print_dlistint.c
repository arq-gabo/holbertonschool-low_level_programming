#include "lists.h"

/**
 * print_dlistint - print doubly linked list
 * @h: Head List
 * Return: Number of items of the linked list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
