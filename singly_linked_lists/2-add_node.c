#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - ajoute un nouveau noeud au début d'une liste
 * @head: pointeur vers le pointeur de la liste
 * @str: chaîne à stocker dans le nouveau noeud
 *
 * Return: pointeur vers le nouveau noeud ou NULL si échec
 */
list_t *add_node(list_t **head, const char *str)
{
    list_t *new_node;

    if (!head || !str)  // sécurité
        return NULL;

    new_node = malloc(sizeof(list_t));
    if (!new_node)
        return NULL;

    new_node->str = strdup(str);
    if (!new_node->str)
    {
        free(new_node);
        return NULL;
    }

    new_node->len = strlen(str);
    new_node->next = *head;  // on pointe vers l'ancien head
    *head = new_node;        // on met le nouveau en tête

    return new_node;
}