#include "main.h"
#include <string.h>
/**
* puts_half - prints half of a string.
*Description: 'prints half of a string.'
*@str: param
*/

void puts_half(char *str)
{
int i, len;
len = strlen(str);
i = strlen(str) / 2;
for (; i < len; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
