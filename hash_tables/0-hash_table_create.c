#include "hash_tables.h"
#include <stdlib.h> /* Pour malloc, calloc, free */

/**
 * hash_table_create - Crée une nouvelle table de hachage.
 * @size: La taille du tableau (nombre de buckets).
 *
 * Retourne: Un pointeur vers la table de hachage nouvellement créée, ou NULL si erreur.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *ht;

    /* 1. Vérification de la taille (optionnel mais bonne pratique) */
    if (size == 0)
        return (NULL);

    /* 2. Allouer la mémoire pour la structure de la table de hachage (le metadata) */
    ht = malloc(sizeof(hash_table_t));
    if (ht == NULL)
        return (NULL);

    /* 3. Allouer la mémoire pour le tableau de pointeurs (hash_node_t **) */
    /* calloc est préféré car il initialise tous les pointeurs à NULL (comme requis). */
    ht->array = calloc(size, sizeof(hash_node_t *));
    if (ht->array == NULL)
    {
        free(ht); /* Nettoyage si l'allocation du tableau échoue */
        return (NULL);
    }

    /* 4. Initialiser la taille */
    ht->size = size;

    return (ht);
}