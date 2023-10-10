#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - a function that prints the alphabet, in lowercase
 *Description: 'C program to print alphabet'
 */
void print_alphabet(void)
{
int i;
for (i = 97; i <= 122; i++)
{
_putchar(i);
}
_putchar('\n');
}
