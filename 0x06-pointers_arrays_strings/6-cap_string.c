#include "main.h"

/**
* cap_string - invierte el array
* @str: matriz
* Return: value to str
*/

char *cap_string(char *str)
{
int a = 0;
int b = 0;
char x[14] = {9, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};

while (str[a] != '\0')
{
if (a == 0 && str[a] >= 'a' && str[a] <= 'z')
{
str[a] = str[a] - 32;
}
while (x[b] != '\0')
{
if (x[b] == str[a] && (str[a + 1] >= 'a' && str[a + 1] <= 'z'))
{
str[a + 1] = str[a + 1] - 32;
}
b++;
}
a++;
}
return (str);
}
