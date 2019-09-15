#include "lists.h"

/**
 * add_dnodeint - Add a node at the beginning of the double linked list
 * @n : value to add to the list
 * @head : head of the linked list
 * Return: pointer to the element added
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
