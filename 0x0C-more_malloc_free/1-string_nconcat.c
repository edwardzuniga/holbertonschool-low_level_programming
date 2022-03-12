#include "main.h"
#include <stdlib.h>

/**
* *string_ncconcat - concatenates two strings.
* @s1: pointer
* @s2: pointer
* @n: int
* Return: value 0
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *str;
unsigned int in = n, a;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

for (a = 0; s1[a]; a++)
in++;

str = malloc(sizeof(char) * (in + a));

if (str == NULL)
return (NULL);

in = 0;

for (a = 0; s1[a]; a++)
str[in++] = s1[a];

for (a = 0; s2[a] && a < n; a++)
str[in++] = s2[a];

str[in] = '\0';

return (str);
}
