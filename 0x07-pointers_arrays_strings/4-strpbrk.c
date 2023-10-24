#include "main.h"
/**
* _strpbrk - function locates the first occurrence in the string s
*of any of the bytes in the string accept.
*Description: 'function locates the first occurrence in the string s
* of any of the bytes in the string accept'
*@s: source string
*@accept: byte to search in the source string
*Return: a pointer to the byte in s that matches one of the bytes in accept
*, or NULL if no such byte is found
*/

char *_strpbrk(char *s, char *accept)
{
int i = 0, j = 0;

while (s[i] != '\0')
{
j = 0;
while (accept[j] != '\0')
{
if (*s == accept[j])
{
return (s);
}
j++;
}


s++;
}
return ('\0');
}
