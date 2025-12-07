#include "hash_tables.h"

/**
 * hash_table_set - inserts or updates a key/value
 * @ht: hash table
 * @key: key (cannot be empty)
 * @value: value to store (will be duplicated)
 *
 * Return: 1 success, 0 fail
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *node, *tmp;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[idx];

	/* Vérifier si la clé existe déjà → on update */
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			/* On remplace l’ancienne value */
			free(tmp->value);
			tmp->value = strdup(value);
			return (tmp->value ? 1 : 0);
		}
		tmp = tmp->next;
	}

	/* Sinon on ajoute un nouveau node (toujours en début) */
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);

	node->key = strdup(key);
	node->value = strdup(value);

	if (node->key == NULL || node->value == NULL)
	{
		free(node->key);
		free(node->value);
		free(node);
		return (0);
	}

	node->next = ht->array[idx]; /* chainage */
	ht->array[idx] = node;

	return (1);
}
