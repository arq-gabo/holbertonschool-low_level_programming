#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list.
 *@h: contain the elements to count.
 *
 * Return: The numbers of nodes.
 */

size_t list_len(const list_t *h)
{
	int count;

	for (count = 0 ; h != NULL ; count++)
	{
		h = h->next;
	}
	return (count);
}
