#include "main.h"
#include <stdlib.h>

/**
 * create_array - crée un tableau de caractères et le remplit
 * @size: taille du tableau
 * @c: caractère utilisé pour remplir le tableau
 *
 * Return: pointeur vers le tableau, ou NULL si erreur
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *array;

if (size == 0)
return (NULL);

array = malloc(size * sizeof(char));
if (array == NULL)
return (NULL);

for (i = 0; i < size; i++)
array[i] = c;

return (array);
}
