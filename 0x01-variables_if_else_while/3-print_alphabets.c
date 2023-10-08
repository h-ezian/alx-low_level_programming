#include <stdio.h>

/**
 *main - Entry point
 *Description: 'C program to print the alphabet in lower case'
 *Return: Always 0
 */
int main(void)
{
int alphabets[52] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i',
		     'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r',
		     's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'A',
		     'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
		     'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S',
		     'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
int i = 0;
while (i < 52)
{
putchar(alphabets[i]);
i++;
}
putchar('\n');
return (0);
}
