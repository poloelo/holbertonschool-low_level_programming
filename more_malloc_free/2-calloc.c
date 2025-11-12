#include "main.h"
#include <stdlib.h>

void *_calloc(unsigned int nmemb, unsigned int size)
{
    unsigned int i;
    int *array;
    
    if (nmemb == 0 || size == 0) return NULL;
    
    array = malloc(size *nmemb);
    if (array == NULL) return NULL;
    
    for (i = 0; i < nmemb; i++) array[i] = 0;
    
    return array;
}
