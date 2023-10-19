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
char *min = "abcdefghijklmnopqrstuvwxyz";
char *maj = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int sep[] = {9, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};
int i, j, upperFlag, k;
upperFlag = 0;
i = 0;
while (str[i] != '\0')
{
if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 48 && str[i] <= 57))
{
upperFlag = 0;
}
if (upperFlag == 1)
{
if (str[i] >= 98 && str[i] <= 122)
{
for (j = 0; j < 26; j++)
{
if (str[i] == min[j])
{
str[i] = maj[j];
upperFlag = 0;
break;
}
}
}
}
k = 0;
while (k < 13)
{
if (str[i] == sep[k])
{
upperFlag = 1;
break;
}
k++;
}
i++;
}
return (str);
}
