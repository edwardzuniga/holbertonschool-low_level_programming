#include "main.h"

/**
* _strspn - obtiene la longitud de una subcadena de prefijo
* @s: cadena para comprobar
* @accept: subcadena
* Return: n bytes
*/

unsigned int _strspn(char *s, char *accept)
{
int conteo = 0;
int a = 0;
int b = 0;

while (s[a] != '\0')
{
while (accept[b] != '\0')
{
if (accept[b] == s[a])
conteo++;
b++;
}
b = 0;
a++;
if (s[a] == 32)
{
break;
}
}
return (conteo);
}
