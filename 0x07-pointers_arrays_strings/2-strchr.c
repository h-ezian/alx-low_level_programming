#include "main.h"

/**
* _strchr - function that locates a character in a string.
*Description: 'function that locates a character in a string.'
*@s: string
*@c: character to locate
*Return:  a pointer to the character
*/

char *_strchr(char *s, char c)
{
int i = 0;
while (s[i] != '\n')
{
if (s[i] == c)
{
return (&s[i]);
}
i++;
}
return (NULL);
}
