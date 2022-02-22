#include "main.h"
#include <stdio.h>
/**
* print_array - imprime n elementos de una matriz de enteros
* @a: puntero
* @n: numero de elementos
* Return: value 0
*/

void print_array(int *a, int n)
{
int x;

for (x = 0; x < n; x++)
{
printf("%d", a[x]);

if (x < n - 1)
{
printf(", ");
}
}
printf("\n");
}
