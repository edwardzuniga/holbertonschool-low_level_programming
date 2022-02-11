#include <stdio.h>

/**
* main - init
* Return: value 0
*/

int main(void)
{
char alfa;
char alfaM;
for (alfa = 'a'; alfa <= 'z'; alfa++)
for (alfaM = 'A'; alfaM <= 'Z'; alfaM++)
putchar(alfa);
putchar(alfaM);
putchar('\n');
return (0);
}
