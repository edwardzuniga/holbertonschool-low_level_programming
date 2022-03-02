#include "main.h"

/**
* _print_rev_recursion - sptrint string rev
* @s: string
* Return: value 0
*/

void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
