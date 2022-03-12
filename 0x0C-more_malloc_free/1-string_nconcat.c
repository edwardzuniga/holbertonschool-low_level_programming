#include "main.h"
#include <stdlib.h>

/**
* string_nconcat - concatenates two strings.
* @s1: pointer
* @s2: pointer
* @n: int
* Return: value 0
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *str;
unsigned int ref1, ref2;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

ref1 = 0;

while (s1[ref1] != '\0')
ref1++;
str = malloc(sizeof(char) * (ref1 + n + 1));
if (str == NULL)
return (NULL);
ref1 = ref2 = 0;
while (s1[ref1] != '\0')
{
str[ref1] = s1[ref1];
ref1++;
}
while (ref2 < n && s2[ref2] != '\0')
{
str[ref1] = s2[ref2];
ref1++, ref2++;
}
str[ref1] = '\0';
return (str);
}
