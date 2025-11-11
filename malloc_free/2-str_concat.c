#include "main.h"
#include <stdlib.h>

int _strlen(char *str)
{
    int len = 0;
    while (str[len] != '\0') len ++;
    return len;
}

char *str_concat (char *s1, char *s2)
{
    int i = 0;
    
    if (s1 == NULL) s1 = "";
    if (s2 == NULL) s2 = "";    
    
    int len1 = _strlen(s1);
    int len2 = _strlen(s2);
    int len = len1 + len2;
    
    char *str = malloc(sizeof(char) * len);
    if(str == NULL) return NULL;
    
    for(; i < len; i++)
    {
        if(i < len1) str[i] = s1[i];
        else if(i >= len1) str[i] = s2[i - len1];
    }

    str[len] = '\0';
    return str;
}
