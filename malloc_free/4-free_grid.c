#include "main.h"
#include <stdlib.h>
/**
 * free_grid - libère l'espace d'une grille
 * @grid: adresse du pointeur du tableau
 * @height: deuxieme dimension du tableau
 *
 */
void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
