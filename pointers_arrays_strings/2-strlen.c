#include "main.h"

int _strlen(char *s)
{
int len = 0;
char c = *s;
while(c != "\0")
{
len++;
c++;
}
return (len);
}
