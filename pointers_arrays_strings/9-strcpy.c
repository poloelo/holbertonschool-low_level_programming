#include "main.h"

int _strlen(char *str)
{
    int i = 0;
    while (str[i] != "\0")
    {
        i++;
    }
    return i;
}

char *_strcpy(char *dest, char *src)
{
    int i;
    for (i = 0; i <= _strlen(src); i++)
    {
        *dest[i] = *src[i];
    }
   return dest;
}
