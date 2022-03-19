#include "variadic_functions.h"

/**
 * print_all -  prints anything.
 * @format: is a list of types of arguments
 * Description: Print a new line at the end of your function
 * Return: value 0
 */

void print_all(const char * const format, ...)
{
int a = 0, b = 0;
char *string;
char *area = ", ";
va_list add;

va_start(add, format);

while (format && format[b])
b++;

while (format && format[a])
{

if (a == (b - 1))
{
area = "";
}
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
if (string == NULL)
string = "(nil)";
printf("%s%s", string, area);
break;
}
a++;
}
printf("\n");
va_end(add);
}
