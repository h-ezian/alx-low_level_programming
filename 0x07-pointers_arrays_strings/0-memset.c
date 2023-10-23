#include "main.h"

/**
* _memset - function that fills memory with a constant byte.
*Description: 'function that fills memory with a constant byte.'
*@s: s with the constant byte b
*@b: the constant byte b
*@n: n bytes of the memory area pointed to by s
*Return:  pointer to the memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}

return (s);
}
