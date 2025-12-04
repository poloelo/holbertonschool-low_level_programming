#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to the pointer of the list
 * @str: string to duplicate and store in the new node
 *
 * Return: address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
    list_t *new_node;
    char *dup_str;

    if (!head || !str)
        return (NULL);

    /* 1. Dupliquer la chaîne en premier */
    dup_str = strdup(str);
    if (!dup_str)
    {
        return (NULL); /* Échec de strdup */
    }

    /* 2. Allouer le nouveau nœud */
    new_node = malloc(sizeof(list_t));
    if (!new_node)
    {
        free(dup_str); /* IMPORTANT: Libérer la chaîne si le nœud échoue */
        return (NULL);
    }

    /* 3. Initialiser les champs */
    new_node->str = dup_str;
    new_node->len = strlen(dup_str); /* Ou strlen(str), les deux sont corrects */
    
    /* 4. Mettre à jour la liste (ajout au début) */
    new_node->next = *head;
    *head = new_node;

    return (new_node);
}