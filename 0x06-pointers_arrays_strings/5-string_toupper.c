#include "main.h"

/**
* string_toupper - invierte el array
* @string: matriz
* Return: value 0
*/

char *string_toupper(char *string)
{
int x = 0;

while (string[x] != '\0')
{
if (string[x] >= 'a' && string[x] <= 'z')
{
string[x] = string[x] - 32;
}
x++;
}
return (string);
}
