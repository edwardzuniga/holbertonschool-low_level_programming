#include "function_pointers.h"

/**
* int_index - searches for an integer.
* @array: array
* @size: size of the array
* @cmp: pointer that compares
* Return: value 0
*/

int int_index(int *array, int size, int (*cmp)(int))
{
int integer;

if (array == NULL || cmp == NULL || size <= 0)
{
return (-1);
}
for (integer = 0; integer < size; integer++)
{
if ((*cmp)(array[integer]) != 0)
{
return (integer);
}
}
return (-1);
}
