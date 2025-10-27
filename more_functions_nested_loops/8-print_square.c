#include "main.h"

void print_square(int size)
{
int x;
int y;
if (size <= 0)
{
_ptuchar('\n');
} 

for (x = 0; x < size; x++)
    
    for(y = 0; y < size; y++)
    {
        _putchar('#');
    }

    _putchar('\n');
}
