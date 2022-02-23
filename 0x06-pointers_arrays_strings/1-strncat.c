#include "main.h"

/**
* _strncat - concatena las dos cadenas
* @src: string 1
* @dest: string 2
* @n: time
* Return: value dest
*/

char *_strncat(char *dest, char *src, int n)
{
int x = 0;
int y = 0;

while (dest[x] != 0)
{
x++;
}

while (src[y] != 0 && y < n)
{
dest[x] = src[y];
x++;
y++;
}
return (dest);
}
