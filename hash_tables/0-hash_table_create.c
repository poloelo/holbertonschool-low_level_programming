#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array (number of buckets).
 *
 * Return: A pointer to the newly created hash table, or NULL if error.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *ht = NULL;
    unsigned long int i;

    /* 1. Allocate memory for the hash table structure (the metadata) */
    ht = malloc(sizeof(hash_table_t));
    if (ht == NULL)
        return (NULL);

    /* 2. Set the size of the array */
    ht->size = size;

    /* 3. Allocate memory for the array of hash_node_t pointers (the buckets) */
    /* Note: calloc initializes memory to zero, which is perfect for pointers (NULL) */
    ht->array = calloc(size, sizeof(hash_node_t *));
    if (ht->array == NULL)
    {
        /* Clean up the previously allocated memory for the structure */
        free(ht);
        return (NULL);
    }

    /* Note: Since calloc was used, explicit initialization loop (like below) is optional */
    /*
    for (i = 0; i < size; i++)
        ht->array[i] = NULL;
    */

    /* 4. Return the pointer to the created hash table */
    return (ht);
}