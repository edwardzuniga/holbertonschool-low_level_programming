#include "main.h"
#include <stdlib.h>

/**
* str_concat - concatenates two strings.
* @s1: string 1
* @s2: string 2
* Return: he function should return NULL on failure
*/

char *str_concat(char *s1, char *s2)
{
char *cadena = NULL;
unsigned int a;
int x1, x2, conteo = 0;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (x1 = 0; s1[x1] != '\0'; x1++)
;
for (x2 = 0; s2[x2] != '\0'; x2++)
;
cadena = (char *)malloc((x1 + x2 + 1) * sizeof(char));
if (cadena == NULL)
{
return (NULL);
}
for (a = 0; s1[a] != '\0'; a++)
cadena[a] = s1[a];
for (; s2[conteo] != '\0'; a++)
{
cadena[a] = s2[conteo];
conteo++;
}
return (cadena);
}
