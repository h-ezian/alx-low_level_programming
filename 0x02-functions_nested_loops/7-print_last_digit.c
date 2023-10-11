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
if (n < 0)
{
n = -n;
}
return (n % 10);
}
