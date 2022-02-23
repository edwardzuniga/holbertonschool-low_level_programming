#include "main.h"

/**
* reverse_array - invierte el array
* @a: matriz
* @n: elementos
* Return: value 0
*/

void reverse_array(int *a, int n)
{
int x = 0;
int temporal;

n = n - 1;

while (x < n)
{
temporal = a[x];
a[x] = a[n];
a[n] = temporal;
x++;
n--;
}
}
