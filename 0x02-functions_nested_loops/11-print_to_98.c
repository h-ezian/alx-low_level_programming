#include <stdio.h>
#include "main.h"
/**
* print_to_98 - a function that  prints all natural numbers from n to 98
*Description: 'C program to  prints all natural numbers from n to 98
*@n: staring number
*/
void print_to_98(int n)
{
while (n != 98)
{
printf("%d, ", n);
if (n >= 98)
{
n--;
}
else
{
n++;
}
}
printf("98\n");
}
