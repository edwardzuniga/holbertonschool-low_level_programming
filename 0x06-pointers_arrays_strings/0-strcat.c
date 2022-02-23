#include "main.h"

/**
* _strcat - concatena las dos cadenas
* @src: string 1
* @dest: string 2
* Return: value dest
*/

char *_strcat(char *dest, char *src)
{
int x = 0;
int y = 0;

while (dest[x] != 0)
{
x++;
}

while (src[y] != 0)
{
dest[x] = src[y];
x++;
y++;
}
return (dest);
}
