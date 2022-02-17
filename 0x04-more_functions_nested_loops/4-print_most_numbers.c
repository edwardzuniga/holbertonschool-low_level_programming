#include "main.h"

/**
* print_most_numbers - imprimir numeros x10 excepto
* Return: value 0
*/

void print_most_numbers(void)
{
int numero;
for (numero = '0'; numero <= '9'; numero++)
{
if (numero != '2' && numero != '4')
_putchar(numero);
}
_putchar('\n');
}
