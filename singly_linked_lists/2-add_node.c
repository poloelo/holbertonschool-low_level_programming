#include "lists.h"
#include <stdlib.h> /* Pour malloc et free */

/* * Remarque Importante : Les fonctions <string.h> (comme strlen) 
 * ne sont pas listées. Vous devez potentiellement les coder vous-même 
 * ou vérifier si elles sont tolérées. Pour l'instant, nous supposons 
 * qu'elles sont interdites, donc nous calculons la longueur manuellement.
 */

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: Pointer to the pointer of the list head.
 * @str: The string to be duplicated and stored in the new node.
 *
 * Return: The address of the new element, or NULL if it fails.
 */
list_t *add_node(list_t **head, const char *str)
{
    list_t *new_node;
    char *dup_str;
    unsigned int len = 0;
    const char *p;

    /* 1. Vérifications initiales */
    if (head == NULL || str == NULL)
        return (NULL);

    /* 2. Calculer la longueur du str manuellement (si strlen interdit) */
    for (p = str; *p != '\0'; p++)
        len++;

    /* 3. Allouer la mémoire pour la duplication de la chaîne (+1 pour '\0') */
    dup_str = malloc(sizeof(char) * (len + 1));
    if (dup_str == NULL)
        return (NULL); /* Échec d'allocation de la chaîne */

    /* 4. Copier la chaîne manuellement */
    for (p = str; *p != '\0'; p++)
        *dup_str++ = *p;
    *dup_str = '\0'; /* Terminateur null */
    /* Ramener dup_str à son début après la copie */
    dup_str -= len; 

    /* 5. Allouer la mémoire pour le nouveau nœud */
    new_node = malloc(sizeof(list_t));
    if (new_node == NULL)
    {
        /* Si l'allocation du nœud échoue, libérer la chaîne allouée */
        free(dup_str);
        return (NULL);
    }

    /* 6. Remplir les champs et insérer au début */
    new_node->str = dup_str;
    new_node->len = len;
    
    /* Le 'next' du nouveau nœud pointe vers l'ancien début */
    new_node->next = *head;
    
    /* La tête pointe maintenant vers le nouveau nœud */
    *head = new_node;
    

    return (new_node);
}