#include "main.h"

/**
 * flip_bits -  returns the number of bits you would need
 * to flip to get from one number to another.
 * @n: integer 1
 * @m: integer2
 * Return: to flipi
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int flipi = 0, xori = n ^ m;

while (xori != 0)
{
if ((xori & 1) == 1)
{
flipi++;
}
xori = xori >> 1;
}
return (flipi);
}
