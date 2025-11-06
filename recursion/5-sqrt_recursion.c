#include "main.h"

int _sqrt_recursion(int n)
{
    if (n < 0) return (-1);
    if (n >= 0 && n <= 1) return 1;
    return (_sqrt_recursion(n - 1) + n / _sqrt_recursion(n - 1)) / 2;
}
