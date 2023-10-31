#include "main.h"
#include <string.h>

/**
* _strdup - function that returns a pointer to a newly
* allocated space in memory
*Description: 'function that returns a pointer to a newly
* allocated space in memory'
*@str: string
*Return: pointer to the duplicated string or null
*/

char *_strdup(char *str)
{
int i = 0;
int length = strlen(str) * sizeof(*str);
char *new_str;
new_str = malloc(length);
if (str == NULL || new_str == NULL)
{
return (NULL);
}

while (*str)
{
new_str[i] = *str;
i++;
str++;
}
return (new_str);
}
