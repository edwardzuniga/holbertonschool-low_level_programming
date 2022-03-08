#include "main.h"
#include <stdlib.h>


/**
* free_grid - creates an array of chars.
* @grid: tamaño de la memoria para imprimir
* @height: a imprimir
* Return: a pointer to the array, or NULL if it fails
*/

void free_grid(int **grid, int height)
{
int x;

if (grid == NULL || height <= 0)
{
return;
}

for (x = height - 1; x >= 0; x++)
{
free(grid[x]);
}
free(grid);
}
