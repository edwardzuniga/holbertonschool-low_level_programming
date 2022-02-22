#include "main.h"

/**
* puts_half - imprime la mitad de la cadena
* @str: la cadena
* Return: value 0
*/

void puts_half(char *str)
{
int a = 0;
int b;

while (str[a] != '\0')
{
a++;
}
if (a % 2 == 0)
{
a = a / 2;
}
else
{
a = (a + 2) / 2;
}
while (str[a] != '\0')
{
b = str[a];
a++;
_putchar(b);
}
_putchar('\n');
}
