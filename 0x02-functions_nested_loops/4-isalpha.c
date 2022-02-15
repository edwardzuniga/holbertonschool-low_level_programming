#include "main.h"

/**
* _isalpha - chequear si es minusculas o mayusculas
* @c: init
* Return: value 0 or 1
*/

int _isalpha(int c)
{
char chequeo;
char chequeoM;
for (chequeo = 'a'; chequeo <= 'z'; chequeo++)
{
if (c == chequeo)
return (1);
}
for (chequeoM = 'a'; chequeoM <= 'z'; chequeoM++)
{
if (c == chequeoM)
return (1);
}
return (0);
}
