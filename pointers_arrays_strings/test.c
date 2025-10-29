#include <stdio.h>

void change(int *n);
void swap_int (int *a, int *b);
int main(void)
{
int table[5] = {1,2,3,4,5};
int *a = table;
int *b = table + 1;
swap_int(a,b);
printf("%d\n", table[0]);
printf("%d\n", table[1]);
}

void change(int *n)
{
*n = 7;
}
 void swap_int(int *a, int *b)
{
int n = *a;
*a = *b;
*b = n;
}
