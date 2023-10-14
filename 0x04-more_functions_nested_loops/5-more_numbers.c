#include "main.h"
/**
* more_numbers - function that prints 10 times the numbers, from 0 to 14.
*Description: 'function that prints 10 times the numbers, from 0 to 14.'
*/
void more_numbers(void)
{
int i, j, k = 49, l = 10;
while (l > 0)
{
for (i = 0; i <= 1; i++)
{
for (j = 48; j <= 57; j++)
{
if (i == 1 && j < 53)
{
_putchar(k);
}
_putchar(j);
if (i == 1 && j == 52)
{
break;
}
}
}
_putchar('\n');
l--;
}
}
