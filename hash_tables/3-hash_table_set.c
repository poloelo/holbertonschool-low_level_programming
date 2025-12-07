#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: The hash table
 * @key: The key, cannot be empty
 * @value: The value associated with the key
 *
 * Return: 1 if succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int index;
hash_node_t *new_node;
char *value_copy;
if (!ht || !key || *key == '\0' || !value)
return (0);
value_copy = strdup(value);
if (!value_copy)
return (0);
index = key_index((unsigned char *)key, ht->size);
new_node = ht->array[index];
while (new_node)
{
if (strcmp(new_node->key, key) == 0)
{
free(new_node->value);
new_node->value = value_copy;
return (1);
}
new_node = new_node->next;
}
new_node = malloc(sizeof(hash_node_t));
if (!new_node)
{
free(value_copy);
return (0);
}
new_node->key = strdup(key);
if (!new_node->key)
{
free(value_copy);
free(new_node);
return (0);
}
new_node->value = value_copy;
new_node->next = ht->array[index];
ht->array[index] = new_node;
return (1);
}
