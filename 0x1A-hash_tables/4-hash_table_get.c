#include "hash_tables.h"

/**
 * grab_value - return value string associated whit a key
 * @hn: pointer to hash node
 * @key: key for search
 * Return: value string, or NULL is no match
 */

const char *grab_value(hash_node_t *hn, const char *key)
{

	while (hn != NULL)
	{
		if (strcmp(hn->key, key) == 0)
		{
			return (hn->value);
		}
		hn = hn->next;
	}
	return (NULL);
}

/**
 * hash_table_get - retrieve value associated with a key
 * @ht: pointer to a hash table
 * @key: key string
 * Return: value string
 */


char *hash_table_get(const hash_table_t *ht, const char *key)
{

	unsigned long int idx;

	idx = key_index((const unsigned char *)key, ht->size);
	return ((char *)(grab_value((ht->array[idx]), key)));
}
