#include "main.h"
/**
* print_number - function  that prints an integer.
*Description: 'function  that prints an integer.'
*@n: param
*/
void print_number(int n)
{
int i, j, m, u, d, c;

if (n > 9)
{
u = n % 10;
d = (n - u) / 10;
_putchar(d + '0');
_putchar(u + '0');
}
else
{
_putchar(n + '0');
}
}
