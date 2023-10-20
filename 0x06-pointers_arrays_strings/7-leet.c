#include "main.h"
/**
* leet - function that encodes a string into 1337.
*Description: 'function that encodes a string into 1337.'
*@str: pointer to String
*Return:  pointer to encoded string
*/

char *leet(char *str)
{
char *min = "aeotl";
char *maj = "AEOTL";
int num[] = {52, 51, 48, 55, 49};
int i = 0, j;

while (str[i] != '\0')
{
for (j = 0; j < 5; j++)
{
if (str[i] == min[j] || str[i] == maj[j])
{
str[i] = num[j];
break;
}
}
i++;
}
return (str);
}
