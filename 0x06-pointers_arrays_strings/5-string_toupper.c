#include "main.h"
#include <string.h>
/**
* string_toupper - function that changes all lowercase
* letters of a string to uppercase.
*Description: 'function that changes all lowercase
* letters of a string to uppercase.'
*@str: pointer to String
*Return:  pointer to uppercase string string
*/


char *string_toupper(char *str)
{
char *min = "abcdefghijklmnopqrstuvwxyz";
char *maj = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int i, len, j;
len = strlen(str);
for (i = 0; i < len; i++)
{
if (str[i] >= 98 || str[i] <= 122)
{
for (j = 0; j < 26; j++)
{
if (str[i] == min[j])
{
str[i] = maj[j];
break;
}
}
}
}
return (str);
}
