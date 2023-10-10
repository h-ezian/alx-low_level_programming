#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - a function that prints 10x the alphabet, in lowercase
 *Description: 'C program to print alphabet'
 */
void print_alphabet_x10(void)
{
int i, x = 10;
while (x > 0)
{
for (i = 97; i <= 122; i++)
{
_putchar(i);
}
x--;
}
_putchar('\n');
}
