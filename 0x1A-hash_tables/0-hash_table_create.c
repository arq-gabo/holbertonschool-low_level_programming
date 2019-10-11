#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_create - function for create hash table
 * @size: size of hash table
 * Return: returns the creation of the hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;

	if (size == 0)
	{
		return (NULL);
	}

	ht = malloc(sizeof(hash_table_t));

	if (ht == NULL)
	{
		return (NULL);
	}

	ht->size = size;
	ht->array = calloc(size, sizeof(hash_table_t *));
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}
	return (ht);
}
