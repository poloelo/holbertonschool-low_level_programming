#include "main.h"

void _puts(char *str)
{
char *i;
for (i = str; i < (str + _strlen(str)); i++) _putchar(*i);
}
