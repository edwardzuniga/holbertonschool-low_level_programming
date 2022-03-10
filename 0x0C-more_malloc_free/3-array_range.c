#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* array_range - creates an array of integers.
* @min: minimo valor
* @max: maximo valor
* Return: value 0
*/

int *array_range(int min, int max)
{
int *arreglo;
int a;

if (min > max)
{
return (NULL);
}
arreglo = malloc(sizeof(int) * (max - min + 1));
if (arreglo == NULL)
{
return (NULL);
}
for (a = 0; min <= max; min++, a++)
{
arreglo[a] = min;
}
return (arreglo);
}
