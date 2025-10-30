#include "main.h"
/**
 * _strlen - Fonction pour calculer le nombre de caractere d'un string
 *
 * @s: Le pointeur du premier element d'un tableau de char/ un string
 *
 * Return: int nombre de caractères
 */

int _strlen(char *s)
{
int len = 0;

while (*s++)
len++;
return (len);
}

/**
* puts2 - Fonction qui print un caractere sur deux
*
* @str : //
*
*/

void puts2(char *str)
{
int i;
for (i = 0; i < _strlen(str); i++)
{
if (i == 0 || i % 2 == 0)
_putchar(str[i]);
}
_putchar('\n');
}
