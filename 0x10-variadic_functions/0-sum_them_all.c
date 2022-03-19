#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of parameters
 *
 * Return: result of parameters
 */

int sum_them_all(const unsigned int n, ...)
{
unsigned int i, add;
va_list date;

add = 0;
va_start(date, n);
for (i = 0; i < n; i++)
{
add = add + va_arg(date, int);
}
va_end(date);
return (add);
}
