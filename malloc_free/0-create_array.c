#include "main.h"
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
    int i = 0;
    if (size == 0) return NULL;

    char* array = malloc(size * sizeof(char));
    for (; i < size; i++ ) array[i] = c;
    if (array == NULL) return NULL;
    else return array;
}
