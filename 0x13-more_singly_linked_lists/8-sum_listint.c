#include "lists.h"

/**
 * sum_listint - sums all the data n of a list
 *
 * @head: pointer to list
 *
 * Return: sum of all the data
 */

int sum_listint(listint_t *head)
{

	listint_t *current;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	
	current = head;
	
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);

}
