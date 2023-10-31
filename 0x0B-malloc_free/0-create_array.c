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
tab = malloc(sizeof(c)*size);
if (tab == NULL)
{
return (NULL);
}

return tab;
}
