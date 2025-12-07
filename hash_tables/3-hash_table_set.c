#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>

/**
 * hash_table_set - Adds or updates an element in the hash table
 * @ht: hash table
 * @key: key (cannot be empty)
 * @value: value to store (duplicated)
 *
 * Return: 1 on success, 0 on error
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node, *tmp;
	char *value_copy;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];

	/* Check if key already exists → update */
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = value_copy;
			return (1);
		}
		tmp = tmp->next;
	}

	/* Key does not exist → create new node (add at beginning) */
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		free(value_copy);
		return (0);
	}

	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(value_copy);
		free(node);
		return (0);
	}

	node->value = value_copy;
	node->next = ht->array[index]; /* Chaining */
	ht->array[index] = node;

	return (1);
}
