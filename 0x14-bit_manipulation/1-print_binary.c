#include "main.h"

/**
 * print_binary -  prints the binary representation of a number.
 * @n: integer
 *
 * Return: value 0
 *
 */

void print_binary(unsigned long int n)
{
int printrepre = ((n & 1) + '0');

if (n > 1)
{
print_binary(n >> 1);
}
putchar(printrepre);
}
