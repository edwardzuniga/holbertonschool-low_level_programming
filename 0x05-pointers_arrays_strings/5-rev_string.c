#include "main.h"

/**
* rev_string - invierte la cadena
* @s: la cadena
* Return: value 0
*/

void rev_string(char *s)
{
int a = 0;
int b;
char atras = s[0];

while (s[a] != '\0')
a++;
for (b = 0; b < a; b++)
{
a--;
atras = s[b];
s[b] = s[a];
s[a] = atras;
}
}
