#include <stdio.h>
#include "main.h"

/**
* _abs - a function that computes the absolute value of an integer
*Description: 'C program computes the absolute value of an integer'
*@n: given number
*Return: absolute value
*0 and prints 0 if n is zero -1 and prints - if n is
*less than zero
*/
int _abs(int n)
{
if (n >= 0)
{
return (n);
}
else
{
return (-n);
}
}
