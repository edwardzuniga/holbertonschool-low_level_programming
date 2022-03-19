#include "variadic_functions.h"

/**
 * print_all -  prints anything.
 * @format: is a list of types of arguments
 *
 * Return: value 0
 */

void print_all(const char * const format, ...)
{
int a;
char *string;
char *area;
va_list add;

va_start(add, format);
a = 0;
while (format && format[a])
{
area = "";
if (format[a] + 1)
area = ", ";
switch (format[a])
{

case 'c':
printf("%c%s", va_arg(add, int), area);
break;
case 'i':
printf("%d%s", va_arg(add, int), area);
break;
case 'f':
printf("%f%s", va_arg(add, double), area);
break;
case 's':
string = va_arg(add, char *);
if (!string || !*string)
string = "(nil)";
printf("%s%s", string, area);
break;
}
a++;
}
printf("\n");
}
