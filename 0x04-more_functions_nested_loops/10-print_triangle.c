#include "main.h"
/**
* print_triangle - function  that prints a triangle.
*Description: 'function  that prints a triangle.'
*@n: param
*/
void print_triangle(int n)
{
int i, j;
if (n > 0)
{
for (i = 1; i <= n; i++)
{
for (j = 1; j <= n; j++)
{
if (j > (n - i))
{
_putchar('#');
}
else
{
_putchar(32);
}
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
