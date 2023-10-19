#include "main.h"
/**
* _strncat - function that concatenates two strings.
*Description: 'function that concatenates two strings.'
*@src: source
*@dest: destination
*@n: n bytes from src
*Return: pointer to destination
*/

char *_strncat(char *dest, char *src, int n)
{
int i, j;

i = 0;
while (dest[i] != '\0')
{
dest[i] = dest[i];
i++;
}
j = 0;
while (src[j] != '\0' && j < n)
{
dest[i] = src[j];
j++;
i++;
}

dest[i] = '\0';
return (dest);
}
