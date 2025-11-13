#include "main.h"
#include <stdlib.h>

void *malloc_checked(unsigned int b)
{
    void *m = malloc(b);
    if (m == NULL) exit(98);
    return m;
}
