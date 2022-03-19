#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator:  is the string to be printed between numbers
 * @n: the number of integers passed to the function
 *
 * Return: value 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;

va_list digits;

va_start(digits, n);

for (i = 0; i < n; i++)
{
printf("%d", va_arg(digits, int));

if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}
}
va_end(digits);
printf("\n");
}
