#include "main.h"
/**
* reverse_array - function that reverses the content of an array of integers.
*Description: 'function that reverses the content of an array of integers.'
*@a: array
*@n:  number of elements of the array string
*/

void reverse_array(int *a, int n)
{
int i, j, tmp, stop;
j = n - 1;
if (n % 2 == 0)
{
stop = n / 2;
}
else
{
stop = (n - 1) / 2;
}
for (i = 0; i < stop; i++)
{
tmp = a[i];
a[i] = a[j];
a[j] = tmp;
j--;
}
}
