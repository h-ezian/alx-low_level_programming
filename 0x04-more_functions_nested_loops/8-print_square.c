#include "main.h"
/**
* print_square - function that prints a square.
*Description: 'function that prints a square.'
*@n: param
*/
void print_square(int n)
{
int i,j;
if (n > 0)
{
for (i = 0; i < n; i++)
{
for (j = 0; j < n; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
