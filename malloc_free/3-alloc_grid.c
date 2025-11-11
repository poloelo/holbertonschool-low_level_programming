#include "main.h"
#include <stdlib.h>

int **alloc_grid(int width, int height)
{
    int i, j;
    
    int **array = malloc(sizeof(int *) * height);
    if (array == NULL) return NULL;
    if(width <= 0 || height <= 0) return NULL;
    
    for(i = 0; i < height; i++)
    {
        array[i] = malloc(sizeof(int) * width);
        if (array[i] == NULL) return NULL;
        
        for(j = 0 ; j < width; j++) array[i][j] = 0;
    }
    
    return array;
}
