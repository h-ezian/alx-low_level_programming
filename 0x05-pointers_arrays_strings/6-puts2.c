#include "main.h"
#include <string.h>
/**
* puts2 - prints every other character of a string, starting
*with the first character.
*Description: 'prints every other character of a string,
*starting with the first character.'
*@str: param
*/
void puts2(char *str)
{
int i;
for (i = 0; i < strlen(str); i = i + 2)
{
_putchar(str[i]);
}
_putchar('\n');
}
