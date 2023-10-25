#include "main.h"

/**
* _strlen_recursion - function that returns the length of a string
*Description: 'function that returns the length of a string'
*@s: string
*Return: the length of string
*/

int _strlen_recursion(char *s)
{
if (*s)
{
s++;
return (1 + _strlen_recursion(s));
}
}
