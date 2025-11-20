#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_numbers(const char *separator, const unsigned int n, ...)
{
    int i;
    va_list args;
    va_start(args, n);
    for (i = 0; i < n; i++)
    {
        if (i == n - 1) printf("%d\n", va_arg(args, int));
        else printf("%d%s", va_arg(args, int),separator);
    }
    va_end(args);
}
