#include "3-calc.h"

/**
 * op_add - the sum of two integers
 * @a: first parameter
 * @b: second parameter
 *
 * Return: the sum
 */

int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - the difference of two integers
 * @a: first parameter
 * @b: second parameter
 *
 * Return: the difference
 */

int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - the multiplication of two integers
 * @a: first parameter
 * @b: second parameter
 *
 * Return: the multiplication
 */

int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - the division of two integers
 * @a: first parameter
 * @b: second parameter
 *
 * Return: the division
 */

int op_div(int a, int b)
{
if (b != 0)
return (a / b);
printf("Error\n");
exit(100);
}

/**
 * op_mod - the modulus of two integers
 * @a: first parameter
 * @b: second parameter
 *
 * Return: the modulus
 */

int op_mod(int a, int b)
{
if (b != 0)
return (a % b);
printf("Error\n");
exit(100);
}
