#include "main.h"
#include <string.h>
/**
* _strcat - copies the string pointed to by src,
* including the terminating null byte (\0),
*to the buffer pointed to by dest.
*Description: 'prints n elements of an array of integers.'
*@src: source
*@dest: destination
*Return: pointer to destination
*/

#include <stdio.h>
char *_strcat(char *dest, char *src)
{
int i, j;
i = 0;
while (dest[i] != '\0')
{
dest[i] = dest[i];
i++;
}
j = 0;
while (src[j] != '\0')
{
dest[i] = src[j];
j++;
i++;
}

dest[i] = '\0';
return (dest);
}
