#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - function that returns a pointer to a 2 dimensional
* array of integers.
*Description: 'function that returns a pointer to a 2 dimensional
* array of integers.'
*@width: number of row
*@height: number of column
*Return: a pointer to a 2 dimensional array of integers.
*/

int **alloc_grid(int width, int height)
{
if (width <= 0 || height <= 0)
{
return (NULL);
}

int *ptr, **tab;
int len = 0, i, j;

len = sizeof(int *) * width + sizeof(int) * height * width;
tab = (int **)malloc(len);

if (tab)
{
return (NULL);
}

ptr = (int *)(tab + width);


for (i = 0; i < width; i++)
{
tab[i] = (ptr + height * i);
}
return (tab);
}
