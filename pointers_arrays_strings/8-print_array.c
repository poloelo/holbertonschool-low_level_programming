#include "main.h"
#include <stdio.h>

/**
 * print_array - affiche les n premiers éléments d'un tableau d'entiers
 * @a: pointeur vers le tableau d'entiers
 * @n: nombre d'éléments à afficher
 *
 * Description: Affiche les éléments séparés
 * par ", " et se termine par un \n.
 */
void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
	{
		printf("\n");
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			if (i != (n - 1))
			{
				printf("%d, ", a[i]);
			}
			else
			{
				printf("%d\n", a[i]);
			}
		}
	}
}
