#include <string.h>
#include "main.h"

/**
* _strspn - function that gets the length of a prefix substring.
*Description: 'function that gets the length of a prefix substring.'
*@s: bytes in the initial segment
*@accept: bytes accept
*Return: the number of bytes in the initial segment of s
*/

unsigned int _strspn(char *s, char *accept)
{
int i = 0, j;
int len = strlen(accept);
unsigned int count1 = 0, count2 = 0;
while (s[i] != '\0')
{
j = 0;
while (j < len)
{
if (s[i] == accept[j])
{
count1++;
break;
}
j++;
}
if (count1 > count2)
{
count2 = count1;
}
else
{
count1 = 0;
}

i++;
}

return (count2);
}
