#include <stdio.h>

/**
* main - init
* Return: value 0
*/

int main(void)
{
int numero;
char letra;
for (numero = '0'; numero <= '9'; numero++)
putchar(numero);
for (letra = 'a'; letra <= 'f'; letra++)
putchar(letra);
putchar('\n');
return (0);
}
