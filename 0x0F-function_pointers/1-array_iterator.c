#include "function_pointers.h"

/**
* array_iterator - function given as a parameter
* @array: pointer
* @size: size of the array
* @action: pointer
* Return: value 0
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t a;

if (array != NULL && action != NULL)
{
for (a = 0; a < size; a++)
(*action)(array[a]);
}
}
