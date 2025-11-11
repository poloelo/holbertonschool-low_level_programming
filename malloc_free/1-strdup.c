#include "main.h"
#include <stdlib.h>

int _strlen(char *str)
{
    int len = 0;
    while(str[len] != '\0') 
    {
        len++;
    }
    return len;
}

char *_strdup(char *str)
{
    int i = 0;
    int str_len = _strlen(str);
    char* dup = malloc(str_len * sizeof(char));
    
    if (dup == NULL) return NULL;
    else {
        for(; i <= str_len; i++) dup[i] = str[i];
        return dup;
        }
}
