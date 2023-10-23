#include "main.h"

/**
* _memcpy - function that fills memory with a constant byte.
*Description: 'function that fills memory with a constant byte.'
*@src: memory area src
*@dest: memory area dest
*@n: n bytes of the memory area pointed to by s
*Return:  a pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
