#include "main.h"
/**
* _strncpy - function that copies a string.
*Description: 'function that copies a string.'
*@src: source
*@dest: destination
*@n: n bytes from src
*Return: pointer to destination
*/

char *_strncpy(char *dest, char *src, int n)
{
int i;
i = 0;

while (src[i] != '\0' && i < n)
{
dest[i] = src[i];
i++;
}
while (i < n)
{
dest[i] = '\0';
i++;
}

return (dest);
}
