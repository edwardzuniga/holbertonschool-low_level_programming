#include "main.h"

/**
* _memcpy - copies memory area.
* @dest: puntero
* @src: byte constante
* @n: byte memoria
* Return: to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int a = 0;

while (a < n)
{
*dest++ = *src++;
a++;
}
return (dest);
}
