#include "main.h"
#include <stddef.h>

char *_strpbrk(char *s, char *accept)
{
    unsigned int i, j;

    for (i = 0; i != '\0'; i++)
    {
        for (j = 0; j != '\0'; j++)
        {
            if (s[i] == s[j])
                return (s + i);

        }

    }

    return (NULL);

}
