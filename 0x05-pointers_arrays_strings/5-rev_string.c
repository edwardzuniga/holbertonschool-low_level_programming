#include "main.h"

/**
* rev_string - invierte la cadena
* @s: la cadena
* Return: value 0
*/

void rev_string(char *s)
{
int a;
int b;
int temporal;
int largo;

while (s[a] != 0)
{
a++;
}

largo = a;
a = 0;
b = largo - 1;

while (a < b)
{
temporal = s[a];
s[a] = s[b];
s[b] = temporal;
a++;
b--;
}
}
