#ifndef VARFUNC
#define VARFUNC
#include <stdarg.h>

typedef struct printer
{
	char type;
	void (*func)(va_list);
} printer_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif