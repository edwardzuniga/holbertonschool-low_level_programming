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
unsigned int a, b;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

a = 0;

while (s1[a] != '\0')
a++;
str = malloc(sizeof(char) * (a + n + 1));
if (str == NULL)
return (NULL);
a = b = 0;
while (s1[a] != '\0')
{
str[a] = s1[a];
a++;
}
while (b < n && s2[b] != '\0')
{
str[a] = s2[b];
a++, b++;
}
str[a] = '\0';
return (str);
}
