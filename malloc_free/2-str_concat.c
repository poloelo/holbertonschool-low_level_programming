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
 * str_concat - concatène deux chaînes de caractères
 * @s1: première chaîne
 * @s2: deuxième chaîne
 *
 * Return: pointeur vers la nouvelle chaîne, ou NULL si erreur
 */
char *str_concat(char *s1, char *s2)
{
int i, j, len1, len2;
char *str;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

len1 = _strlen(s1);
len2 = _strlen(s2);

str = malloc(sizeof(char) * (len1 + len2 + 1));
if (str == NULL)
return (NULL);

for (i = 0; i < len1; i++)
str[i] = s1[i];

for (j = 0; j < len2; j++)
str[i + j] = s2[j];

str[i + j] = '\0';
return (str);
}
