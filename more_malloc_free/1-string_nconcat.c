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
 * string_nconcat - concatène deux chaînes
 * @s1: première chaîne
 * @s2: deuxième chaîne
 * @n: nombre de caractères de s2 à ajouter
 *
 * Return: pointeur vers la nouvelle chaîne, ou NULL si erreur
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, len1;
char *concat;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

len1 = _strlen(s1);
concat = malloc((len1 + n + 1) * sizeof(char));
if (concat == NULL)
return (NULL);

for (i = 0; i < len1; i++)
concat[i] = s1[i];
for (i = 0; i < n && s2[i] != '\0'; i++)
concat[len1 + i] = s2[i];

concat[len1 + i] = '\0';
return (concat);
}
