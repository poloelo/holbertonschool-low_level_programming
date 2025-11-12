#include "main.h"
#include <stdlib.h>

int _strlen(char *str)
{
    int len = 0;
    while(str[len] != '\0') len++;
    return len;
}

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    unsigned int i; 
    unsigned int len1 = _strlen(s1);
    unsigned int len = _strlen(s1) + n + 1;

    char *concat = malloc(((_strlen(s1) + n + 1))*sizeof(char));
    if (concat == NULL) return NULL;
    
    for (i = 0; i < len; i++)
    {
        if (i < len1 ) concat[i] = s1[i];
        else if (i < len1 + n && i >= len1 ) concat[i] = s2[i - len1];
    }
    
    concat[len] = '\0';
    return concat; 
}
