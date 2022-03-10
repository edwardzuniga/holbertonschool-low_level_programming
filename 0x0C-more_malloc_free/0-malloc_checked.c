#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* malloc_checked - allocates memory using malloc
* @b: la memoria de asignacion
* Return: value 0
*/

void *malloc_checked(unsigned int b)
{
void *asigned;

asigned = (int *)malloc(b * (sizeof(int)));
if (asigned == NULL)
exit(98);
else
return (asigned);
}
