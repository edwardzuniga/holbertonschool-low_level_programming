#include "main.h"

/**
* leet - invierte el array
* @str: string main
* Return: value to str
*/

char *leet(char *str)
{
int a = 0;
int b;
char x[] = "aAeEoOtTlL";
char y[] = "4433007711";

while (str[a] != '\0')
{
b = 0;
while (x[b] != '\0')
{
if (str[a] == x[b])
{
str[a] = y[b];
}
b++;
}
a++;
}
return (str);
}
