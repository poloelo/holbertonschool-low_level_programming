#include "hash_tables.h"
#include <stdlib.h> /* Pour malloc, free */
#include <string.h> /* Pour strdup, strcmp */

/**
 * hash_table_set - Ajoute ou met à jour un élément dans la table de hachage.
 * @ht: La table de hachage.
 * @key: Clé (ne peut pas être vide).
 * @value: Valeur associée à la clé (doit être dupliquée).
 *
 * Retourne: 1 si succès, 0 si échec.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    hash_node_t *new_node, *temp;
    char *value_copy, *key_copy;
    unsigned long int index;

    /* 1. Vérifications des paramètres */
    if (!ht || !key || *key == '\0' || !value)
        return (0);

    /* 2. Calculer l'index et dupliquer la valeur */
    index = key_index((const unsigned char *)key, ht->size);
    value_copy = strdup(value);
    if (!value_copy)
        return (0);

    /* 3. Gérer la mise à jour (Clé existante) */
    temp = ht->array[index];
    while (temp)
    {
        if (strcmp(temp->key, key) == 0)
        {
            /* Clé trouvée: libérer l'ancienne valeur et mettre à jour */
            free(temp->value);
            temp->value = value_copy; /* Utilise la copie fraîchement faite */
            return (1);
        }
        temp = temp->next;
    }

    /* 4. Gérer l'insertion (Nouvelle clé / Collision) */
    /* Dupliquer la clé pour le nouveau noeud */
    key_copy = strdup(key);
    if (!key_copy)
    {
        free(value_copy);
        return (0);
    }

    /* Allouer le nouveau noeud */
    new_node = malloc(sizeof(hash_node_t));
    if (!new_node)
    {
        free(key_copy);
        free(value_copy);
        return (0);
    }

    /* Remplir le noeud */
    new_node->key = key_copy;
    new_node->value = value_copy;

    /* Ajouter au début de la liste chaînée (gestion de collision par prédécesseur) */
    new_node->next = ht->array[index];
    ht->array[index] = new_node;

    return (1);
}