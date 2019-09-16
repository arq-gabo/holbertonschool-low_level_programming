#include "lists.h"

/**
 * sum_dlistint - sums al the nodes of the linked list
 * @head: head of the list
 * Return: the sum
 */

int sum_dlistint(dlistint_t *head)
{
	int sum;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
