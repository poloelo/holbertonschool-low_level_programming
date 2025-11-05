#include "main.h"

void print_diagsums(int *a, int size)
{
    int i, j, f_diag, s_diag;
    f_diag = 0;
    s_diag = 0;
    for (i = 0; i < size; i++)
        {
            f_diag += *(a +  i*size + i);
            s_diag += *(a + i*size + (size - 1 -i));
        }
}
