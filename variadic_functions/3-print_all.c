#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

void print_int(va_list arg);
void print_char(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);

void print_int(va_list arg)
{
    printf("%i", va_arg(arg, int));
}

void print_char(va_list arg)
{
    printf("%c", va_arg(arg, int));
}

void print_float(va_list arg)
{
    printf("%f", va_arg(arg, double));
}

void print_string(va_list arg)
{
    char *s = va_arg(arg, char *);
    
    if (s == NULL)
    {
        printf("(nil)");
        return;
    }
    printf("%s", s);
}

void print_all(const char * const format, ...)
{
    va_list args;
    va_start(args, format);
    
    int i = 0;
    int j;
    
    struct type_arg {
        char c;
        void (*type_f)(va_list);
    };

    struct type_arg types[] = {
        { 'i', print_int },
        { 'c', print_char },
        { 'f', print_float },
        { 's', print_string },
        { 0, NULL }
    };

    while (format && format[i] != '\0')
    {
        j = 0;
        
        while (types[j].c != 0)
        {
            if (format[i] == types[j].c)
            {
                types[j].type_f(args);
                
                if (format[i + 1] != '\0')
                {
                    printf(", ");
                }
                
                break;
            }
            j++;
        }
        
        i++;
    }
    
    printf("\n");
    va_end(args);
}
