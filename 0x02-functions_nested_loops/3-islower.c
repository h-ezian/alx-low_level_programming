#include <stdio.h>
#include "main.h"

/**
* _islower - a function that checks for lowercase character
*Description: 'C program to checks for lowercase character.'
*@c: alphabet to check
*Return: 1  if c is lowercase 0 otherwise
*/
int _islower(int c)
{
int i;
for (i = 97; i <= 122; i++)
{
if (i == c)
{
return (1);
}
return (0);
}

}
