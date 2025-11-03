#include "main.h"
#include <stddef.h>

int _strlen(char *str)
{
    int len = 0;
    while(str[len] != '\0')
    {
        len++;
    }
    return len;
}

char *_strchr(char *s, char c)
{
    int i;
    int n = _strlen(s);
    for (i = 0; i < n; i++)
    {
        if (s[i] == c)
        {
            return (s + i);
        }
    }
    return (NULL);
}
