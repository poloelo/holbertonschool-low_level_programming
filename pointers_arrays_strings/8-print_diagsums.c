#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: pointer to the first element of the matrix
 * @size: number of rows and columns of the matrix
 */
void print_diagsums(int *a, int size)
{
	int i;
	int f_diag = 0, s_diag = 0;

	for (i = 0; i < size; i++)
	{
		f_diag += *(a + i * size + i);
		s_diag += *(a + i * size + (size - 1 - i));
	}

	printf("%d, %d\n", f_diag, s_diag);
}
