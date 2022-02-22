#include "main.h"

/**
* puts2 - imprime todos los demas caracteres de una cadena
* @str: la cadena
* Return: value 0
*/

void puts2(char *str)
{
int a;
int b;

for (a = 0; str[a] != '\0'; a++)
{
;
}
for (b = 0; b < a; b = b + 2)
{
_putchar(str[b]);
}
_putchar('\n');
}
