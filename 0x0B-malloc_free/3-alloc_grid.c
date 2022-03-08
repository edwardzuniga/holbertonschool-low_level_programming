#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - returns a pointer to a 2 dimensional array of integers.
* @width: ancho de la matriz
* @height: altura de la matriz
* Return: a pointer to the array, or NULL if it fails
*/

int **alloc_grid(int width, int height)
{
int x, y, **set;

if (width <= 0 || height <= 0)
{
return (NULL);
}

set = malloc(sizeof(int *) * height);

if (set == NULL)
{
return (NULL);
}
for (x = 0; x < height; x++)
{
set[x] = malloc(sizeof(int) * width);
if (set[x] == NULL)
{
for (x -= 1; x >= 0; x--)
{
free(set[x]);
}
free(set);
return (NULL);
}
for (y = 0; y < width; y++)
{
set[x][y] = 0;
}
}
return (set);
}
