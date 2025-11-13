#include "main.h"
#include <stdlib.h>

/**
 * _strlen - calcule la longueur d'une chaîne
 * @str: chaîne de caractères
 *
 * Return: longueur de la chaîne
 */
int _strlen(char *str)
{
int len = 0;

while (str[len] != '\0')
len++;

return (len);
}

/**
 * _strdup - crée une copie d'une chaîne de caractères
 * @str: chaîne à dupliquer
 *
 * Return: pointeur vers la copie, ou NULL si erreur
 */
char *_strdup(char *str)
{
int i, str_len;
char *dup;

if (str == NULL)
return (NULL);

str_len = _strlen(str);
dup = malloc((str_len + 1) * sizeof(char));
if (dup == NULL)
return (NULL);

for (i = 0; i <= str_len; i++)
dup[i] = str[i];

return (dup);
}
