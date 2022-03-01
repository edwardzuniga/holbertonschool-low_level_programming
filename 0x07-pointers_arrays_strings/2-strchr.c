#include "main.h"

/**
* _strchr - locates a character in a string
* @s: puntero
* @c: byte constante
* Return: null
*/

char *_strchr(char *s, char c)
{
int a = 0;

while (s[a] != '\0')
{
a++;
if (s[a] == c)
return (s + a);
}
return ('\0');
}
