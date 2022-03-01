#include "main.h"
#include <stdio.h>

/**
* print_diagsums - prints the diagonal.
* @a: puntero
* @size: ancho de la columna
* Return: value 0
*/

void print_diagsums(int *a, int size)
{
int m, n, p;
int i = 0;
int j = 0;

for (m = 0; m < size; m++)
{
p = (m * size) + m;
i += *(a + p);
}
for (n = 0; n < size; n++)
{
p = (n * size) + (size - 1 - n);
j += *(a + p);
}
printf("%d, %d\n", i, j);
}
