#include "main.h"

/**
* print_number - Imprime un entero
* @n: INt
* Return: value 0
*/

void print_number(int n)
{
unsigned int a = n;

if (n < 0)
{
_putchar('-');
a = -a;
}
if (a / 10)
print_number(a / 10);
_putchar((a % 10) + '0');
}
