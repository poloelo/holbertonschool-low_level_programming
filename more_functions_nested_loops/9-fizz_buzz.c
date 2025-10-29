#include <stdio.h>

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
putchar('0' + i);
putchar(' ');
}
}
if (i >= 10 && i < 100)
{
if (mul_three_five(i) == 1) print_Fizz_Buzz();
else if (mul_five(i) == 1) print_Buzz();
else if (mul_three(i) == 1) print_Fizz();
else
{ 
putchar('0' + i/10);
putchar('0' + i%10);
putchar(' ');
}
}
if (i >= 100)
{
putchar('B');
putchar('u');
putchar('z');
putchar('z');
putchar('\n');
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
putchar('F');
putchar('i');
putchar('z');
putchar('z');
putchar(' ');
}

void print_Buzz(void)
{
putchar('B');
putchar('u');
putchar('z');
putchar('z');
putchar(' ');
}

void print_Fizz_Buzz(void)
{
putchar('F');
putchar('i');
putchar('z');
putchar('z');
putchar('B');
putchar('u');
putchar('z');
putchar('z');
putchar(' ');

