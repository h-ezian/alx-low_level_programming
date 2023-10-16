#include "main.h"
/**
* swap_int - function  that swaps the values of two integers.
*Description: 'function  that swaps the values of two integers'
*@a: param1
*@b: param2
*/
void swap_int(int *a, int *b)
{
int swap;
swap = *a;
*a = *b;
*b = swap;
}
