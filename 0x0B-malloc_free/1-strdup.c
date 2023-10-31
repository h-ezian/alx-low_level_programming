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
if (str == NULL)
{
return (NULL);
}

int i = 0;
char *new_str;
new_str = malloc((strlen(str) - 1) * sizeof(*str));

if (new_str == NULL)
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
