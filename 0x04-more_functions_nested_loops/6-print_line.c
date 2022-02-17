#include "main.h"

/**
* print_line - imprime una linea en la terminal
* @n: init
* Return: value 0
*/

void print_line(int n)
{
while (n > 0)
{
_putchar ('_');
n--;
}
_putchar ('\n');
}
