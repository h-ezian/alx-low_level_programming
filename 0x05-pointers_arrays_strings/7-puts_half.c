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
i = strlen(str) / 2;
len = strlen(str);
if (len % 2 != 0)
{
i = i - 1;
}
for (; i < len; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
