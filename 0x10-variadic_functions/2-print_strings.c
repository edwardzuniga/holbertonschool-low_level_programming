#include "variadic_functions.h"

/**
 * print_strings -  prints strings, followed by a new line.
 * @separator:  is the string to be printed between strings
 * @n: the number of strings passed to the function
 *
 * Return: value 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int a;
char *p;
va_list add;

va_start(add, n);
for (a = 0; a < n; a++)
{
p = va_arg(add, char *);
if (p != NULL)
printf("%s", p);

else
printf("(nil)");
if (separator != NULL && a < n - 1)
printf("%s", separator);
}
printf("\n");
va_end(add);
}
