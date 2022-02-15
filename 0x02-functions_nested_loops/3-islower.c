#include "main.h"

/**
* _islower - chequear si es minusculas
* Return: value 0
*/

int _islower(int c)
{
char chequeo;
for (chequeo = 'a'; chequeo <= 'z'; chequeo++)  
{
if (c == chequeo)
return (1);
}
return (0);
}
