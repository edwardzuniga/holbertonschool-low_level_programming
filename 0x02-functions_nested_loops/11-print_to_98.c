#include "main.h"

/**
* print_to_98 - imprime de n hasta 98
* @n: init
* Return: value 0 or 1
*/

void print_to_98(int n)
{
while (n != 98)
{
printf("%d, ", n);
if (n > 98)
n--;
else
n++;
}
printf("%d\n", 98);
}
