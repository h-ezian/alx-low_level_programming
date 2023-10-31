#include "main.h"
#include <string.h>

/**
* str_concat - function that concatenates two strings
*Description: 'function that concatenates two strings'
*@s1: string1
*@s2: string2
*Return: pointer to the concatenates string
*/

char *str_concat(char *s1, char *s2)
{
int i = 0;
char *str, *ss1, *ss2;

ss1 = s1 == NULL ? "" :  s1;
ss2 = s2 == NULL ? "" :  s2;

str = malloc((strlen(ss1) + strlen(ss2) + 1) * sizeof(*ss1));
if (str == NULL)
{
return (NULL);
}
while (*ss1)
{
str[i] = *ss1;
i++;
ss1++;
}
while (*ss2)
{
str[i] = *ss2;
i++;
ss2++;
}
return (str);
}

