#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>


void print_strings(const char *separator, const unsigned int n, ...)
{
    unsigned int i; 
    va_list args;
    va_start(args, n);
    
    for (i = 0; i < n; i++)
    {
        printf("%s",va_arg(args, char *));
        if (i < n - 1) 
        {
            if (separator == NULL)
                continue;
            else
            printf ("%s", separator);
        }
    }    
    printf("\n");

    va_end(args);
}
