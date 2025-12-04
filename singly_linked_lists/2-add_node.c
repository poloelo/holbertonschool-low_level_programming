#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h> /* Inclure pour strlen et strdup si non déjà dans string.h/stdlib.h */

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to the pointer of the list (address of the list head)
 * @str: string to duplicate and store in the new node
 *
 * Return: address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
    list_t *new_node;
    char *dup_str;
    unsigned int len = 0;

    /* Vérification de l'argument str et calcul de la longueur */
    if (str == NULL)
        return (NULL);

    /* 1. Allouer la mémoire pour le nouveau nœud */
    new_node = malloc(sizeof(list_t));
    if (new_node == NULL)
        return (NULL);

    /* 2. Dupliquer la chaîne (strdup) */
    dup_str = strdup(str);
    if (dup_str == NULL)
    {
        /* Si strdup échoue, libérer le nœud alloué précédemment */
        free(new_node);
        return (NULL);
    }
    
    /* 3. Calculer la longueur */
    len = strlen(dup_str);

    /* 4. Remplir les champs du nouveau nœud */
    new_node->str = dup_str;
    new_node->len = len;

    /* 5. Mettre à jour les pointeurs pour insérer au début */
    /* Le 'next' du nouveau nœud pointe vers l'ancien début (*head) */
    new_node->next = *head;
    
    /* Le nouveau début de la liste (*head) est maintenant le nouveau nœud */
    *head = new_node;
    

    /* 6. Retourner l'adresse du nouveau nœud */
    return (new_node);
}