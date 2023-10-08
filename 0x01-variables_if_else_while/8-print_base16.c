#include <stdio.h>

/**
 *main - Entry point
 *Description: 'C program to print number from 0 to 15 in hexadecimal'
 *Return: Always 0
 */
int main(void)
{
int i;
char hex[15] = {'0', '1', '2', '3', '4', '5', '6',
'7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};
for (i = 0; i <= 14; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
