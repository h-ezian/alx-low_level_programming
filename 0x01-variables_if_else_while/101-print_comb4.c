#include <stdio.h>

/**
 *main - Entry point
 *Description: 'C program to print number from 0 to 9'
 *Return: Always 0
 */
int main(void)
{
int i, j, k;
for (i = '0'; i <= '9'; i++)
{
for (j = i + 1; j <= '9'; j++)
{
for (k = j + 1; k <= '9'; k++)
{
if (i == j || j == k || i == k)
{
continue;
}
putchar(i);
putchar(j);
putchar(k);
if (i != '7')
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
