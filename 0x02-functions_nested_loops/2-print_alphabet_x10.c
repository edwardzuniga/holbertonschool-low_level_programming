#include "main.h"

/**
* print_alphabet_x10 - imprimir alfabeto x10
* Return: value 0
*/

void print_alphabet_x10(void)
{
char alpha;
int z;
for (z = 1; z <= 10; z++)
{
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
_putchar(alpha);
}
_putchar('\n');
}
}
