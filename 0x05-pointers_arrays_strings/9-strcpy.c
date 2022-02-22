#include "main.h"

/**
* *_strcpy - copia la cadena que apunta src
* @dest: señala
* @src: puntero
* Return: to dest
*/

char *_strcpy(char *dest, char *src)
{
int a = 0;
int b = 0;

while (*(src + a) != '\0')
{
a++;
}
for ( ; b < a; b++)
{
dest[b] = src[b];
}
dest[a] = '\0';
return (dest);
}
