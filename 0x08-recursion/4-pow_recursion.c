#include "main.h"

/**
* _pow_recursion - function that returns the value of x raised to
*the power of y
*Description: 'function that returns the value of x raised to the power of y'
*@x: number1
*@y: number2
*Return: x pow y, -1 if y < 0, and 1 if y == 0
*/

int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}

if (y == 0)
{
return (1);
}
return (x * _pow_recursion(x, y - 1));
}
