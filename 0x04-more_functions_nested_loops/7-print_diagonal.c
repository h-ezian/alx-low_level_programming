#include "main.h"
/**
* print_diagonal - function that draws a diagonal line on the terminal.
*Description: 'function that draws a diagonal line on the terminal.'
*@n: param
*/
void print_diagonal(int n)
{
int i, j;
if (n > 0)
{
for (i = 0; i < n; i++)
{
for (j = 0; j <= i; j++)
{
if (i == j)
{
_putchar('\\');
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
