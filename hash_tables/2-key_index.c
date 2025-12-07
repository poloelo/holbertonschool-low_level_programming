#include "hash_tables.h"

/**
 * key_index - gives index of a key
 * @key: key string
 * @size: size of the hash table
 *
 * Return: index of the key
 */
unsigned long int key_index(const unsigned char *key,
	unsigned long int size)
{
	/* On utilise djb2, puis on réduit dans l'array */
	return (hash_djb2(key) % size);
}
