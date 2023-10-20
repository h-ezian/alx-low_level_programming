#include "main.h"
#include <string.h>
/**
* cap_string - function that capitalizes all words of a string.
*Description: 'function that capitalizes all words of a string.'
*@str: pointer to String
*Return:  pointer to capitalized string string
*/
char *cap_string(char *str)
{
char *min = "abcdefghijklmnopqrstuvwxyz0123456789";
char *maj = "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
int sep[] = {9, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};
int i, j, toUpper, k;
toUpper = 1;
i = 0;
while (str[i] != '\0')
{
if (toUpper == 0)
{
for (k = 0; k < 13; k++)
{
if (str[i] == sep[k])
{
toUpper = 1;
break;
}
}
}
for (j = 0; j < 36; j++)
{
if ((str[i] == min[j]  || str[i] == maj[j]) && toUpper == 1)
{
str[i] = maj[j];
toUpper = 0;
break;
}
}
i++;
}
return (str);
}
