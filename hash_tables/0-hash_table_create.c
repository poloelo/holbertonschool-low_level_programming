#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - create a hash table
 * @size: size of the array
 *
 * Return: pointer to the new hash table, or NULL if fail
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *ht;
    unsigned long int i;

    /* Allocate memory for the hash table structure */
    ht = malloc(sizeof(hash_table_t));
    if (ht == NULL)
        return (NULL);

    /* Set the size */
    ht->size = size;

    /* Allocate memory for the array of pointers to nodes */
    ht->array = malloc(sizeof(hash_node_t *) * size);
    if (ht->array == NULL)
    {
        free(ht);
        return (NULL);
    }

    /* Initialize each cell of the array to NULL */
    for (i = 0; i < size; i++)
        ht->array[i] = NULL;

    return (ht);
}
