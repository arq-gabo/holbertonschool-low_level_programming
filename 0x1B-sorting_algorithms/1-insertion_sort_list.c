#include "sort.h"

/**
 * extractor_node - function to extract the node
 * @node: pointer to the node
 */

void extractor_node(listint_t *node)
{
	if (node->next != NULL)
	{
		node->next->prev = node->prev;
	}
	if (node->prev != NULL)
	{
		node->prev->next = node->next;
	}
	node->next = NULL;
	node->prev = NULL;
}

/**
 * insertion_head - insert a new head also a new head of the list
 * @list: double pointer of the list double linked
 * @new_head: pointer to the node with need upload
 * location in the head of the list
 */

void insertion_head(listint_t **list, listint_t *new_head)
{
	extractor_node(new_head);

	if (*list == NULL)
	{
		*list = new_head;
		new_head->prev = new_head->next = NULL;
		return;
	}
	(*list)->prev = new_head;
	new_head->next = *list;
	new_head->prev = NULL;
	*list = new_head;
}

/**
 * swap_adj - making swap in the node adjacent
 * @head: pointer to the head of the node
 * @before: pointer to the beafore node
 * @after: pointer to the after node
 */

void swap_adj(listint_t **head, listint_t *before, listint_t *after)
{
	int head_swap = FALSE;

	if (*head == before)
	{

		head_swap = TRUE;
	}
	extractor_node(after);

	after->prev = before->prev;
	if (before->prev)
	{
		after->prev->next = after;
	}
	after->next = before;
	before->prev = after;
	if (head_swap)
	{
		*head = after;
	}
}

/**
 * insertion_node - insert node swap after target
 * @target_node: pointer to target
 * @swap_node: pointer to node to be moved
 */

void insertion_node(listint_t *target_node, listint_t *swap_node)
{

	extractor_node(swap_node);

	swap_node->next = target_node->next;
	swap_node->prev = target_node;
	target_node->next = swap_node;

	if (swap_node->next)
	{
		swap_node->next->prev = swap_node;
	}
}

/**
 * insertion_sort_list - sort a doubly linekd list of integers
 * @list: double pointer to the doubly linked list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current, *back_node;

	if (list == NULL || *list == NULL)
		return;

	current = *list;
	while (current->next)
	{
		back_node = current;
		if (back_node->n > back_node->next->n)
		{
			swap_adj(list, back_node, back_node->next);
			print_list(*list);
			back_node = back_node->prev;
			while (back_node->prev != NULL && back_node->n < back_node->prev->n)
			{
				swap_adj(list, back_node->prev, back_node);
				print_list(*list);
			}

		}
		if (current->next == NULL)
			break;
		if (current->next && current->n <= current->next->n)
		{
			current = current->next;
		}
	}
}
