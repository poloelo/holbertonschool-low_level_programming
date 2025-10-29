#include "main.h"

int mul_three(int n);
int mul_five(int n);
int mul_three_five(int n);
void print_Fizz(void);
void print_Buzz(void);
void print_Fizz_Buzz(void);

int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if(i <= 9 && i > 0)
{
if (mul_three_five(i) == 1) print_Fizz_Buzz();
else if (mul_five(i) == 1) print_Buzz();
else if (mul_three(i) == 1) print_Fizz();
else
{
_putchar('0' + i);
_putchar (' ');
}
}
if (i >= 10 && i < 100)
{
if (mul_three_five(i) == 1) print_Fizz_Buzz();
else if (mul_five(i) == 1) print_Buzz();
else if (mul_three(i) == 1) print_Fizz();
else
{ 
_putchar('0' + i/10);
_putchar('0' + i%10);
_putchar(' ');
}
}
if (i >= 100)
{
_putchar('B');
_putchar('u');
_putchar('z');
_putchar('z');
_putchar('\n');
}
}
return 0;
}

int mul_three(int n)
{
if (n % 3 == 0) return 1;
else return 0;
}

int mul_five(int n)
{
if (n % 5 == 0) return 1;
else return 0;
}

int mul_three_five(int n)
{
if (n % 3 == 0 && n % 5 == 0) return 1;
else return 0;
}

void print_Fizz(void)
{
_putchar('F');
_putchar('i');
_putchar('z');
_putchar('z');
_putchar(' ');
}

void print_Buzz(void)
{
_putchar('B');
_putchar('u');
_putchar('z');
_putchar('z');
_putchar(' ');
}

void print_Fizz_Buzz(void)
{
_putchar('F');
_putchar('i');
_putchar('z');
_putchar('z');
_putchar('B');
_putchar('u');
_putchar('z');
_putchar('z');
_putchar(' ');
}
