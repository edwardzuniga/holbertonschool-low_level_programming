#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* calloc - allocates memory using malloc
* @nmemb: pointer
* @size: pointer
* Return: value 0
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *str;
unsigned int i;

if ((nmemb == 0) || (size == 0))
return (NULL);
str = malloc(nmemb * size);
if (str == NULL)
return (NULL);
for (i = 0; i < (nmemb * size); i++)
str[i] = 0;
return (str);
}
