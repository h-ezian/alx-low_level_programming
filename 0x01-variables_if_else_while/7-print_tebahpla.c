#include <stdio.h>

/**
 *main - Entry point
 *Description: 'C program to print the alphabet in lower case in reverse'
 *Return: Always 0
 */
int main(void)
{
int alphabets[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i',
		     'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r',
		     's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
int i = 25;
while (i >= 0)
{
putchar(alphabets[i]);
i--;
}
putchar('\n');
return (0);
}
