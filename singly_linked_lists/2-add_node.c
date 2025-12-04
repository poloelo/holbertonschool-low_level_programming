#include "lists.h"
#include <stdlib.h> /* Pour malloc et free */

/**
 * _strlen - returns the length of a string
 * @s: the string whose length to check
 *
 * Return: integer length of string
 */
unsigned int _strlen(const char *s)
{
    unsigned int c;

    for (c = 0; s[c] != '\0'; c++)
        ;
    return (c);
}

/**
 * _strdup - duplicates a string using malloc
 * @str: the string to duplicate
 *
 * Return: pointer to the duplicated string, or NULL if fails
 */
char *_strdup(const char *str)
{
    char *dup_str;
    unsigned int len;
    unsigned int i;

    if (str == NULL)
        return (NULL);

    len = _strlen(str);

    dup_str = malloc(sizeof(char) * (len + 1));
    if (dup_str == NULL)
        return (NULL);

    for (i = 0; i < len; i++)
        dup_str[i] = str[i];
    dup_str[len] = '\0';

    return (dup_str);
}

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to the pointer of the list head
 * @str: string to duplicate and store in the new node
 *
 * Return: address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
    list_t *new_node;
    char *dup_str;

    if (head == NULL || str == NULL)
        return (NULL);

    /* Utilisation de fonctions locales pour remplacer strdup et strlen */
    dup_str = _strdup(str);
    if (dup_str == NULL)
        return (NULL);

    new_node = malloc(sizeof(list_t));
    if (new_node == NULL)
    {
        free(dup_str);
        return (NULL);
    }

    new_node->str = dup_str;
    new_node->len = _strlen(str);

    /* Insertion au début */
    new_node->next = *head;
    *head = new_node;
    

    return (new_node);
}
