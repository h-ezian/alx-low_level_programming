#include "main.h"
#include <string.h>
/**
* rev_string - function  that reverses a string.
*Description: 'function  that reverses a string.'
*@str: param
*/

void rev_string(char *str)
{
int i, j;
if (!str)
{
return;
}

i = 0;
j = strlen(str) - 1;
while (i < j)
{
char c = str[i];
str[i] = str[j];
str[j] = c;
i++;
j--;
}
}
