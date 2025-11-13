#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - alloue une grille 2D d'entiers et l'initialise à 0
 * @width: nombre de colonnes
 * @height: nombre de lignes
 *
 * Return: pointeur vers le tableau 2D, ou NULL si erreur
 */
int **alloc_grid(int width, int height)
{
int i, j;
int **array;
if (width <= 0 || height <= 0)
return (NULL);

array = malloc(sizeof(int *) * height);
if (array == NULL)
return (NULL);

for (i = 0; i < height; i++)
{
array[i] = malloc(sizeof(int) * width);
if (array[i] == NULL)
{
while (i > 0)
{
i--;
free(array[i]);
}
free(array);
return (NULL);
}

for (j = 0; j < width; j++)
array[i][j] = 0;
}

return (array);
}
