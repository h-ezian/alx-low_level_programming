#include "main.h"

/**
* _sqrt - function that returns the natural square root of a number
*Description: 'function that returns the natural square root of a number'
*@i: init number
*@n: target number
*Return: the sqrt of n
*/

int _sqrt(int i, int n)
{
if (i * i == n)
{
return (i);
}

if (i * i > n)
{
return (-1);
}
return (_sqrt(i + 1, n));

}

/**
* _sqrt_recursion - function that returns the natural square root of a number
*Description: 'function that returns the natural square root of a number'
*@n: number
*Return: the sqrt of n
*/
int _sqrt_recursion(int n)
{
return (_sqrt(1, n));
}
