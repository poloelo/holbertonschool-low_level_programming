#include "main.h"

int _str_len(char *s)
{
    int len = 0;
    while(s[len] != '\0')
    {
    len++;
    }
    return len;
}

int is_palindrome(char *s)
{
    if (*s == '\0') return 0;
    if(*s == *(s + _strlen(s) - 1))
    {
        is_pal = 1;
        is_palindrome(s + 1);
    }
    else is_pal = 0

    
}
