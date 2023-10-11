#include <stdio.h>
#include "main.h"
/**
* print_times_table - a function that  prints the n times table,
* starting with 0
*Description: 'C program to  prints the n times table, starting with 0'
*@n: number of time
*/
void print_times_table(int n)
{
int i, j, m, u, d;
if (n <= 15 && n >= 0)
{
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
m = i * j;
if (m > 9)
{
u = m % 10;
d = (m - u) / 10;
_putchar(44);
_putchar(32);
_putchar(d + '0');
_putchar(u + '0');
}
else
{
if (j != 0)
{
_putchar(44);
_putchar(32);
_putchar(32);
_putchar(32);
}
_putchar(m + '0');
}
}
_putchar('\n');
}
}
}
