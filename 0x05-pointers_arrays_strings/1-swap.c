#include "main.h"

/**
* swap_int - intercambia los valores de dos int
* @a: int 1
* @b: int 2
* Return: value 0 or 1
*/

void swap_int(int *a, int *b)
{
int c = *b;
*b = *a;
*a = c;
}
