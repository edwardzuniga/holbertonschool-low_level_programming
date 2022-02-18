#include "main.h"

/**
* main - imprime numeros hasta el 100
* Return: value 0
*/

int main(void)
{
int x;
for (x = 1; x < 100; x++)
if (x % 15 == 0)
{
printf("FizzBuzz ");
}
else if (x % 5 == 0)
{
printf("Buzz ");
}
else if (x % 3 == 0)
{
printf("Fizz ");
}
else
{
printf("%d ", x);
}
printf("Buzz");
printf("\n");
return (0);
}
