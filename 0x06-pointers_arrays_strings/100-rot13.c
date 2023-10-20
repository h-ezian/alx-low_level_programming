#include "main.h"
/**
* rot13 - function that encodes a string using rot13.
*Description: 'function that encodes a string using rot13.'
*@str: pointer to String
*Return:  pointer to encoded string
*/

char *rot13(char *str)
{
char *min = "abcdefghijklmnopqrstuvwxyz";
char *maj = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int i = 0, j;
int pos;

while (str[i] != '\0')
{
j = 0;
while (j < 26)
{
if ((str[i] == min[j] || str[i] == maj[j]) && j < 13)
{
str[i] = str[i] + 13;
break;
}
else if ((str[i] == min[j] || str[i] == maj[j]) && j >= 13)
{
str[i] = (str[i] + 13) - 26;
break;
}
j++;
}
i++;
}
return (str);
}
