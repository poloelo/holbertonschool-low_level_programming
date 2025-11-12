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
    unsigned int i, len1;
    char *concat; 
    if (s1 == NULL) s1 = "";
    if (s2 == NULL) s2 = "";

    len1 = _strlen(s1);

    concat = malloc((len1 + n + 1) * sizeof(char));
    if (concat == NULL) return NULL;
    
    for (i = 0; i < len1; i++) concat[i] = s1[i];
    for (i = 0; i < n; i++) concat[len1 + i] = s2[i];
    
    concat[len1 + n] = '\0';
    return concat; 
}
