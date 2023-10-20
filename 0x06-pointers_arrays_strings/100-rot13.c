#include "main.h"
/**
* rot13 - function that encodes a string using rot13.
*Description: 'function that encodes a string using rot13.'
*@str: pointer to String
*Return:  pointer to encoded string
*/
char *rot13(char *str)
{
char *alpha = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char *sbt = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
int i = 0, j;
while (str[i] != '\0')
{
for (j = 0; j < 52; j++)
{
if (str[i] == alpha[j])
{
str[i] = sbt[j];
break;
}
}
i++;
}
return (str);
}
