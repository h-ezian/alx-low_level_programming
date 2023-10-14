#include "main.h"
/**
* main - a program that prints the numbers from 1 to 100
*Description: 'a program that prints the numbers from 1 to 100,
*followed by a new line. But for multiples of three print Fizz
*instead of the number and for the multiples of five print Buzz.
*For numbers which are multiples of both three and five print FizzBuzz'
*Return: always 0;
*/
int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{

if (i % 3 == 0 && i % 5 != 0)
{
printf("Fizz ");
continue;
}
else if (i % 3 != 0 && i % 5 == 0)
{
printf("Buzz ");
continue;
}
else if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz ");
continue;
}
printf("%d ", i);
}
printf("\n");
return (0);
}
