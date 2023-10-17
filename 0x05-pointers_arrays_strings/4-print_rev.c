#include "main.h"
#include <string.h>
/**
* print_rev - function  that prints a string, in reverse.
*Description: 'function  that prints a string, in reverse'
*@str: param
*/
void print_rev(char *str)
{
int j;
if (!str)
{
return;
}
j = strlen(str) - 1;
while (j >= 0)
{
_putchar(str[j]);
j--;
}
_putchar('\n');
}
