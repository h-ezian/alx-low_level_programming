#include <stdio.h>
#include "main.h"

/**
* _isalpha - a function that checks for alphabetic character
*Description: 'C program to checks for alphabetic character.'
*@c: alphabet to check
*Return: 1 if c is a letter, lowercase or uppercase 0 otherwise
*/
int _isalpha(int c)
{
int i;

if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
