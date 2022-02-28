#include "main.h"

/**
* _memset - fills memory with a constant byte.
* @s: puntero
* @b: byte constante
* @n: byte memoria
* Return: to s
*/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int a = 0;

while (a < n)
{
*s++ = b;
a++;
}
return (s);
}
