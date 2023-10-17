#include "main.h"
#include <string.h>
/**
* print_array - prints n elements of an array of integers.
*Description: 'prints n elements of an array of integers.'
*@a: pointer on array
*@n: size of array
*/

void print_array(int *a, int n)
{
int i;
if (n > 0)
{
for (i = 0; i < n; i++)
{
if (i > 0)
{
printf(" ");
}
printf("%d", a[i]);
if (i < n - 1)
{
printf(",");
}
}
printf("\n");
}
}
