#include <stdio.h>
#include "main.h"
/**
* print_last_digit - a function that prints the last digit of a number
*Description: 'C program to prints the last digit of a number'
*@n: given number
*Return: last digit of a number
*/
int print_last_digit(int n)
{
int l;
if (n < 0)
{
n = -n;
}
l = n % 10;
_putchar(l);
return (l);
}
