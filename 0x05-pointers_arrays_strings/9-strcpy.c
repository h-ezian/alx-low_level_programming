#include "main.h"
#include <string.h>
/**
* _strcpy - copies the string pointed to by src,
* including the terminating null byte (\0),
*to the buffer pointed to by dest.
*Description: 'prints n elements of an array of integers.'
*@src: source
*@dest: destination
*Return: pointer to destination
*/

char *_strcpy(char *dest, char *src)
{
int i, len;

len = strlen(src);
for (i = 0; i < len; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}
