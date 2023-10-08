#include <stdio.h>

/**
 *main - Entry point
 *Description: 'C program to print number from 0 to 9'
 *Return: Always 0
 */
int main(void)
{
int i, j;
for (i = '0'; i <= '9'; i++)
{
for (j = i + 1; j <= '9'; j++)
{
if (i == j)
{
continue;
}
putchar(i);
putchar(j);
if (i != '8')
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
