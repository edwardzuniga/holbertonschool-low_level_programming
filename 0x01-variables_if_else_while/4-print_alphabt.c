#include <stdio.h>

/**
* main - init
* Return: value 0
*/

int main(void)
{
char alfa;
for (alfa = 'a'; alfa <= 'z'; alfa++)
{
if (alfa != 'q' && alfa != 'e')
putchar(alfa);
}
putchar('\n');
return (0);
}
