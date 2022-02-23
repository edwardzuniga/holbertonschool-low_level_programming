#include "main.h"

/**
* _strncpy - copia las dos cadenas
* @src: string 1
* @dest: string 2
* @n: time
* Return: value dest
*/

char *_strncpy(char *dest, char *src, int n)
{
int a = 0;
while (a < n && src[a] != '\0')
{
dest[a] = src[a];
a++;
}
a = a;
while (a < n)
{
dest[a] = '\0';
a++;
}
return (dest);
}
