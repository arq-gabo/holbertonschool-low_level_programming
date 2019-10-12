#include "hash_tables.h"

/**
 * insert_node - insert node in hash table
 * @ht: pointer to data structure of hash table
 * @hn: already create node to insert into hash table
 * Return: on success return 1
 */



int insert_node(hash_table_t *ht, hash_node_t *hn)
{

	unsigned long int idx;
	hash_node_t *tmp, *prev;

	idx = key_index((const unsigned char *)(hn->key), ht->size);
	if (ht->array[idx] == NULL)
	{
		ht->array[idx] = hn;
		return (1);
	}
	tmp = prev = ht->array[idx];
	while (tmp)
	{
		if (strcmp(tmp->key, (const char *)(hn->key)) == 0)
		{
			if (tmp->value)
			{
				free(tmp->value);
			}
			tmp->value = strdup(hn->value);
			free(hn);
			return (1);
		}
		prev = tmp;
		tmp = tmp->next;
	}
	prev->next = hn;
	return (1);
}

/**
 * free_node - free a fully formed hash table node
 * @hn: node to be freed
 * Return: void
 */

void free_node(hash_node_t *hn)
{
	free(hn->key);
	free(hn->value);
	free(hn);
}

/**
 * hash_table_set - add key value pair to hash table
 * @ht: pointer hash table data structure
 * @key: key string
 * @value: value string
 * Return: if is success return 1, if otherwise 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{

	int status;
	hash_node_t *new_node;

	if (key == NULL || key[0] == '\0' || ht == NULL)
	{
		return (0);
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		return (0);
	}

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->value = NULL;

	status = insert_node(ht, new_node);
	if (status == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
