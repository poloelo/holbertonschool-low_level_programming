/**
 * int_index - fonction qui va appliquer une
 * verification sur un tableau de int
 *
 * @array: le tableau des valeurs qu'il faut verifier
 * @size: taille du tableau (array)
 * @cmp: pointeur vers une fonction de verification
 * Return: -1 si erreur autre chiffre si bon
 */
#include "function_pointers.h"

int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size <= 0)
return (-1);

for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
return (array[i]);
}

return (-1);
}
