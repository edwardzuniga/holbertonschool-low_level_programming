#include "main.h"

/**
* rot13 - invierte el array
* @str: string main
* Return: value to str
*/

char *rot13(char *str)
{
int a = 0;
int b;
char aport[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char produ[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

while (str[a] != '\0')
{
b = 0;
while (aport[b] != '\0')
{
if (str[a] == aport[b])
{
str[a] = produ[b];
break;
}
b++;
}
a++;
}
return (str);
}
