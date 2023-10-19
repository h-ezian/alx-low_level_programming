#include "main.h"
/**
* _strcmp - function that compares two strings.
*Description: 'function that compares two strings.'
*@s1: first String
*@s2: second string
*Return: 0 if s1 = s2; >0 if ASCII char of s1 > s2 < 0 unless
*/

int _strcmp(char *s1, char *s2)
{
int i, res;

i = 0;

while (s1[i] != '\0')
{
res = s1[i] == s2[i] ? 0 : s1[i] - s2[i];
if (s1[i] != s2[i])
{
break;
}
i++;
}
return (res);
}
