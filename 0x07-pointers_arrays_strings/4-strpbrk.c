#include "main.h"

/**
* _strpbrk - obtiene la longitud de una subcadena de prefijo
* @s: puntero 1
* @accept: puntero 2
* Return: s + a or value zero
*/

char *_strpbrk(char *s, char *accept)
{
int a = 0;
int b;

while (s[a] != '\0')
{
b = 0;
while (accept[b] != '\0')
{
if (s[a] == accept[b])
{
return (s + a);
}
b++;
}
a++;
}
return (0);
}
