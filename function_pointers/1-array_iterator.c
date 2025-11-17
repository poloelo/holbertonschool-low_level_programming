/**
 *array_iterator - fonction qui va iterer sur chaque elements
 *du tableau passé en parametre et appliquer a chacun d'entre eux
 *l'operation demandé par action
 *
 * @array: Le tableau d'element qu'on veut modifier
 * @size: la taille du tableau passé en param
 * @action: pointeur vers une fonction
 */
#include "function_pointers.h"
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
for (i = 0; i < size; i++)
action(array[i]);
}
