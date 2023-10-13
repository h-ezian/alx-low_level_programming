#include "main.h"
/**
* print_diagonal - function that draws a diagonal line on the terminal.
*Description: 'function that draws a diagonal line on the terminal.'
*@n: param
*/
void print_diagonal(int n)
{
int i = 1, j;
while (i <= n && n > 0)
{
j = 1;
while (j <= i)
{
_putchar(32);
if (i == j)
{
_putchar('\\');
_putchar('\n');
}
j++;
}
i++;
}
if (n == 0)
{
_putchar('\n');
}
}
