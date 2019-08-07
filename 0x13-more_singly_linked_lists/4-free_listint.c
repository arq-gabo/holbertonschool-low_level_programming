#include "lists.h"

/**
 * free_listint -  free the malloc.
 *@head: is the beginning of the list.
 *
 * Return: The numbers of nodes.
 */

void free_listint(listint_t *head)
{

	listint_t *tmp;

	if (head != head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
