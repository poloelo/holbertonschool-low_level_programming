#include <stdio.h>

void change(int *n);

int main(void)
{
int table[5] = {1,2,3,4,5};
int *p = table;
printf("%p\n",p);
printf("%d\n", *p);
change(p);
printf("%d", table[0]);
}

void change(int *n)
{
*n = 7;
}
