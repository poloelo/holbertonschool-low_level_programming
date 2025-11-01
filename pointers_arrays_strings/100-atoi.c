#include "main.h"

int _strlen(char *str)
{
    int len = 0;
    while (str[len] != '\0' )
    {
        len++;
    }
    return len;
}

int _atoi(char *s)
{
    int i;
    int number = 0;
    int dozens = 1;
    int sign = 0;
    for (i = 0; i < _strlen(s); i++ )
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            number = number + (s[i] * dozens);
            dozens++;
        }
        else if (s[i] == '+') sign++;
        else if (s[i] == '-') sign--:
        else continue:
    }
    if (sign < 0) number =* -1;
    return number;
}
