#ifndef SORT_ALGORITHMS
#define SORT_ALGORITHMS

#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0


/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

void bubble_sort(int *array, size_t size);

void insertion_sort_list(listint_t **list);
void extractor_node(listint_t *node);
void insertion_head(listint_t **list, listint_t *new_head);
void swap_adj(listint_t **head, listint_t *before, listint_t *after);
void insertion_node(listint_t *target_node, listint_t *swap_node);


void selection_sort(int *array, size_t size);

void quick_sort(int *array, size_t size);
int partition(int *array, size_t size, int start, int end);
void qs_recurse(int *array, size_t size, int start, int end);


#endif
