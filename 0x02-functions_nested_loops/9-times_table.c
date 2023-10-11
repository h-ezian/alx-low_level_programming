#include <stdio.h>
#include "main.h"
/**
* times_table - a function that  prints the 9 times table, starting with 0
*Description: 'C program to  prints the 9 times table, starting with 0'
*/
void times_table(void)
{
int i, j, m, u, d;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
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
}
_putchar(m + '0');
}
}
_putchar('\n');
}
}
