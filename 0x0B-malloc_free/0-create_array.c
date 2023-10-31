#include "main.h"

/**
* create_array - function that creates an array of chars, and initializes
*it with a specific char
*Description: 'function that creates an array of chars, and initializes
* it with a specific char'
*@size: init number
*@c: character
*Return: pointer to array or null
*/

char *create_array(unsigned int size, char c)
{
char *tab;
int length = sizeof(c) * size;
int i = 0;
tab = malloc(length);
if (tab == NULL || size == 0)
{
return (NULL);
}
while (i < length)
{
tab[i] = c;
i++;
}
return (tab);
}
