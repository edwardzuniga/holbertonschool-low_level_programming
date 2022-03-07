#include "main.h"
#include <stdlib.h>

/**
* _strdup - returns a pointer to a newly allocated space in memory
* @str: string
* Return: a pointer or NULL
*/

char *_strdup(char *str)
{
char *cadena;
unsigned int a;
int i;

if (str == NULL)
return (NULL);
for (i = 0; str[i] != '\0'; i++)
;
cadena = (char *)malloc(i + 1 * sizeof(char));
if (cadena != NULL)
{
for (a = 0; str[a] != '\0'; a++)
cadena[a] = str[a];
}
else
{
return (NULL);
}
cadena[a] = '\0';
return (cadena);
}
