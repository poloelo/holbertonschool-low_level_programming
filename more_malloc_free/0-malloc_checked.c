#include "main.h"
#include <stdlib.h>

void *malloc_checked(unsigned int b)
{
    int *m = malloc(b);
    if (m == NULL) return NULL;
    return m;
}
