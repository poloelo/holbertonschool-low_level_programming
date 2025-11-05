#include "main.h"

void print_diagsums(int *a, int size)
{
    int i, j, f_diag, s_diag ;
    for (i = 0; i < size; i++)
        for (j = 0; j < size; j++)
        {
            if (i == j) f_diag += *(a + i + j);
            if ((size - i) == (size - j)) s_diag += *(a + (size - i) + (size - j));
        }
}
