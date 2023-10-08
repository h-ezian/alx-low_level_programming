#include <stdio.h>

/**
 *main - Entry point
 *Description: 'C program that prints a string using printf'
 *Return: Always 0
 */
int main(void)
{
int i;
char c;
long l;
long int li;
long long int lli;
float f;

printf("Size of a char: %d byte(s)\n", sizeof(c));
printf("Size of an int: %d byte(s)\n", sizeof(i));
printf("Size of a long int: %d byte(s)\n", sizeof(li));
printf("Size of a long long int: %d byte(s)\n", sizeof(lli));
printf("Size of a float: %d byte(s)\n", sizeof(f));
return (0);
}
