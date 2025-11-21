#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>

void print_int (va_list);
void print_char(va_list);
void print_float(va_list);
void print_string(va_list);

void print_all(const char * const format, ...)
{

    va_list args;
    va_start(args, format);
    
    int i = 0;
    int j = 0;

    struct type_arg {
        char c;
        void (*type_f)(va_list);
    };

I   type_arg types[] = {
    
    { 'i', print_int },
    { 'c', print_char },
    { 'f', print_float },
    { 's', print_string },
    { 0, NULL } 
    
    };

    while (format[i] != '\0')
    {
    j = 0;
        while(types[j] != NULL)
        {
            if (format[i] == types[j].c)
            {
                types[j].type_f(args);
            }
            j++;
        }
        i++;
    }
    va_end(args);
}

void print_int(va_list arg)
{
    printf("%i", va_arg(arg, int));
}
void print_char(va_list arg)
{
    printf("%c", va_arg(arg, char));
}
void print_float(va_list arg)
{
    printf("%f", va_arg(arg, float));
}
void print_string(va_list arg)
{
    printf("%s", va_arg(arg, char *));
}
