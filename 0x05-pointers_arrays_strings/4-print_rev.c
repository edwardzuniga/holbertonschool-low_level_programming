#include "main.h"

/**
* _pint_rev - imprime la cadena al reves
* @s: la cadena
* Return: value 0
*/

void print_rev(char *s)
{
int a = 0;

while (s[a] != 0)
{
a++;
}
while (a > 0)
{
a--;
_putchar(s[a]);
}
_putchar('\n');
}
