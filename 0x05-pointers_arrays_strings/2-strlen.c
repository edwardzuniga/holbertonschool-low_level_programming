#include "main.h"

/**
* _strlen - devuelve la longitud
* @s: la cadena
* Return: int a
*/

int _strlen(char *s)
{
int a;

for (a = 0; s[a] != '\0'; a++)
;
return (a);
}
