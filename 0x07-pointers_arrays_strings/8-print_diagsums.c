#include "main.h"

/**
* print_diagsums - function that prints the sum of the two diagonals
*of a square matrix of integers.
*Description: 'function that prints the sum of the two diagonals
*of a square matrix of integers'
*@a: two dimensional array
*@size: size of the matrix
*/

void print_diagsums(int *a, int size)
{
int i, j, s1 = 0, s2 = 0, *b;

for (i = 0; i < size; i++)
{
b = a + (i * size);
for (j = 0; j < size; j++)
{
if (i == j)
{
s1 += *(b + j);
}

if (i + j == (size - 1))
{
s2 += *(b + j);
}
}
}
printf("%d, %d\n", s1, s2);
}
